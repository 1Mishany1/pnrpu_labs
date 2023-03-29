
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
struct Person {
    char surname[20];
    char name[20];
    char patronymic[20];
    int birthYear;
    int height;
    int weight;
};
void printPerson(const Person& p) {
    cout << p.surname << " " << p.name << " " << p.patronymic << endl;
    cout << "Год рождения: " << p.birthYear << endl;
    cout << "Рост: " << p.height << " cm" << endl;
    cout << "Вес: " << p.weight << " kg" << endl;
}
void printFile(const char* fileName) {
    ifstream file(fileName, ios::binary);
    if (!file) {
        cerr << "Error opening file " << fileName << endl;
        return;
    }
    Person p;
    while (file.read((char*)&p, sizeof(Person))) {
        printPerson(p);
        cout << endl;
    }
    file.close();
}
bool deletePerson(const char* fileName, int height, int weight) {
    bool deleted = false;
    ifstream inFile(fileName, ios::binary);
    if (!inFile) {
        cerr << "Error opening file " << fileName << endl;
        return false;
    }
    ofstream outFile("temp.bin", ios::binary);
    if (!outFile) {
        cerr << "Error creating temporary file" << endl;
        inFile.close();
        return false;
    }
    Person p;
    while (inFile.read((char*)&p, sizeof(Person))) {
        if (p.height != height || p.weight != weight) {
            outFile.write((char*)&p, sizeof(Person));
        }
        else {
            deleted = true;
        }
    }
    inFile.close();
    outFile.close();
    if (deleted) {
        remove(fileName);
        rename("temp.bin", fileName);
    }
    else {
        remove("temp.bin");
    }
    return deleted;
}
bool addPerson(const char* fileName, const char* surname, const char* name, const char* patronymic, int birthYear, int height, int weight, const char* afterSurname) {
    bool added = false;
    ifstream inFile(fileName, ios::binary);
    if (!inFile) {
        cerr << "Error opening file " << fileName << endl;
        return false;
    }
    ofstream outFile("temp.bin", ios::binary);
    if (!outFile) {
        cerr << "Error creating temporary file" << endl;
        inFile.close();
        return false;
    }
    Person p;
    while (inFile.read((char*)&p, sizeof(Person))) {
        outFile.write((char*)&p, sizeof(Person));
        if (strcmp(p.surname, afterSurname) == 0 && !added) {
            Person newP;
            strcpy_s(newP.surname, surname);
            strcpy_s(newP.name, name);
            strcpy_s(newP.patronymic, patronymic);
            newP.birthYear = birthYear;
            newP.height = height;
            newP.weight = weight;
            outFile.write((char*)&newP, sizeof(Person));
            added = true;
        }
    }
    inFile.close();
    outFile.close();
    if (added) {
        remove(fileName);
        rename("temp.bin", fileName);
    }
    else {
        remove("temp.bin");
    }
    return added;
}
int main() {
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));
    const char* fileName = "people.bin";
    const char* surnames[] = { "Иванов", "Петров", "Сидоров", "Смирнов", "Кузнецов" };
    const char* names[] = { "Иван", "Пётр", "Александр", "Алексей", "Дмиртий" };
    const char* patronymics[] = { "Иванович", "Петрович", "Дмитриевич", "Алексеевич", "Дмитриевич" };
    const int numPeople = 5;
    Person people[numPeople];
    for (int i = 0; i < numPeople; i++) {
        strcpy_s(people[i].surname, surnames[rand() % 5]);
        strcpy_s(people[i].name, names[rand() % 5]);
        strcpy_s(people[i].patronymic, patronymics[rand() % 5]);
        people[i].birthYear = rand() % 50 + 1970;
        people[i].height = rand() % 50 + 150;
        people[i].weight = rand() % 50 + 50;
    }
    ofstream file(fileName, ios::binary);
    if (!file) {
        cerr << "Error creating file " << fileName << endl;
        return 1;
    }
    for (int i = 0; i < numPeople; i++) {
        file.write((char*)&people[i], sizeof(Person));
    }
    file.close();
    printFile(fileName);
    cout << endl << "Deleting people with height 170 and weight 70" << endl;

        bool deleted = deletePerson(fileName, 170, 70);
    if (deleted) {
        cout << "People deleted" << endl;
    }
    else {
        cout << "No people deleted" << endl;
    }
    cout << endl << "Adding person after Иванова" << endl;
    bool added = addPerson(fileName, "Соколов", "Игорь", "Петрович", 1980, 180, 80, "Иванов");
    if (added) {
        cout << "Person added" << endl;
    }
    else {
        cout << "Person not added" << endl;
    }
    printFile(fileName);
    return 0;
}