#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <stack>
using namespace std;


string names[30] = { "Григорий", "Лев", "Андрей", "Роман", "Арсений", "Степан", "Владислав", "Никита", "Глеб", "Марк", "Давид", "Ярослав", "Евгений", "Матвей", "Фёдор", "Николай","Артем", "Данил", "Михаил","Семен","Александр","Юрий","Тимофей","Олег", "Сергей", "Владимир", "Дмитрий","Антон","Анатолий","Константин" };
string patronimyc[30] = { "Григорьевич", "Львович", "Андреевич", "Романович", "Арсеньевич", "Степанович", "Владиславович", "Никитич", "Глебович", "Маркович", "Давидович", "Ярославович", "Евгеньевич", "Матвеевич", "Фёдорович", "Николаеевич","Артёмович", "Данилович", "Михайлович","Семенов","Александрович","Юрьевич","Тимофеевич","Олегович", "Сергеевич", "Владимирович", "Дмитриевич ","Антонович","Анатольевич","Константинович" };
string surnames[30] = { "Иванов", "Петров", "Смирнов", "Кузнецов", "Васильев", "Попов", "Волков", "Андреев", "Сергеев", "Новиков", "Соколов", "Михайлов", "Алексеев", "Павлов", "Морозов", "Романов","Николаев", "Егоров", "Степанов","Орлов","Козлов","Никитин","Захаров","Александров", "Зайцев", "Фролов", "Белов","Максимов","Яковлев","Григорьев" };
string ID[30] = { "4130 582951", "4221 532341", "4820 519025", "4812 172471", "4672 265489", "4369 124087", "4198 701223", "4562 567823", "4390 150692", "4519 980592", "4871 871242", "4321 918659", "4791 590128", "4395 761284", "4348 916282", "4885 489609","4982 809401", "4791 761492", "4492 619502","4822 549325","4280 545325","4130 498612","4509 515896","4830 509595", "4829 520045", "4719 408720", "4410 204012","4680 376124","4217 916513","4671 576124" };
string ph_number[30] = { "8529335262", "8881456242", "8991975252", "8120060130", "8489810391", "8882396816", "8031299183", "8860599381", "8510452498", "8186695558", "8756722877", "8710658376", "8938543511", "8840879097", "8706772726", "8879613784","8635201275", "8436012390", "8968368213","8466801045","8052813509","8075528119","8308201366","8385201363", "8490840491", "8161891860", "8899516704","8075528119","8593474554","8071989708" };
string dates[30] = { "02.08.2000", "05.10.1967", "30.06.1961", "11.03.1999", "02.02.1998", "12.02.1969", "11.07.1980", "13.04.2005", "27.12.2005", "25.08.1977", "30.06.1969", "04.09.1992", "23.06.1970", "19.05.2005", "17.12.1981", "07.12.1995","26.11.2007", "17.12.1965", "19.05.1965","28.11.1996","04.01.1990","19.07.1989","24.02.1967","14.12.2005", "01.05.2006", "12.03.1987", "07.01.1964","21.03.1997","26.05.1992","18.05.1972" };

struct Node {
    string FIO;
    string ID;
    string PhoneNum;
    string DateOfBirthday;
    Node* next;
    Node(string fio, string id, string ph,string date) : FIO(fio), ID(id), PhoneNum(ph), DateOfBirthday(date), next(nullptr) {}
    Node(string ph) : PhoneNum(ph), FIO("NULL"), ID("NULL"), DateOfBirthday("NULL"), next(nullptr) {}
    friend ostream& operator<<(ostream& out, const Node& node)
    {
        if (node.PhoneNum == "not find") { out << "not find"; }
        else if (node.PhoneNum == "delete") { out << "delete"; }
        else
            out << " | " << node.FIO << "\t" << node.PhoneNum << "\t" << node.ID << " | ";
        return out;
    }
};
class HashTable {
private:
    vector<Node*> table;
    int size;

    int hash(string str)
    {
        double a = ((sqrt(5) - 1) / 2) * get_sum_of_date(str);	
        double c = size * (a - int(a));	
        return int(c);	
    }
    int get_sum_of_date(string str)
    {
        return stoi(str.substr(0, 2)) + stoi(str.substr(3, 2)) + stoi(str.substr(6, 4));
    }

public:
    int count_collision = 0;
    HashTable(int s) : size(s)
    {
        table.resize(size, nullptr);
    }
    void insert(string fio, string id, string ph, string date) {
        int index = hash(ph);
        Node* newNode = new Node(fio,id,ph,date);
        if (table[index] == nullptr) {
            table[index] = newNode;
        }
        else {
            count_collision++;
            Node* current = table[index];
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;

        }
    }
    void remove(string ph) {
        int index = hash(ph);
        if (table[index] == nullptr) {
            return;
        }
        else if (table[index]->PhoneNum == ph) {
            Node* temp = table[index];
            table[index] = temp->next;
            delete temp;
        }
        else {
            Node* current = table[index];
            while (current->next != nullptr && current->next->PhoneNum != ph) {
                current = current->next;
            }
            if (current->next != nullptr && current->next->PhoneNum == ph) {
                Node* temp = current->next;
                current->next = temp->next;
                delete temp;
            }
        }
    }
    Node find(string ph) {
        int index = hash(ph);
        Node* current = table[index];
        while (current != nullptr) {
            if (current->PhoneNum == ph) {
                return *current;
            }
            current = current->next;
        }
        return Node("not find");
    }
    void print() {
        for (int i = 0; i < size; i++) {
            Node* current = table[i];
            if (current != nullptr) {
                cout << endl << i + 1 << ": " << *current;
                current = current->next;
            }
            while (current != nullptr) {
                cout << " ->\n   " << *current;
                current = current->next;
            }
        }
    }
    ~HashTable() {
        for (int i = 0; i < size; i++) {
            Node* current = table[i];
            while (current != nullptr) {
                Node* temp = current;
                current = current->next;
                delete temp;
            }
        }
    }
}; 

/*
class HashMap {
private:
    vector<Node*> table;
    int size;

    int hash(string str)
    {
        double a = ((sqrt(5) - 1) / 2) * get_sum_of_date(str);	
        double c = size * (a - int(a));	
        return int(c);	
    int get_sum_of_date(string str);
    {
        return stoi(str.substr(0, 2)) + stoi(str.substr(3, 2)) + stoi(str.substr(6, 4));
    }
public:
    int count_collision = 0;
    HashMap(int s) : size(s)
    {
        table.resize(size, nullptr);
    }

    ~HashMap() {
        for (int i = 0; i < size; i++)
        {
            if (table[i] != nullptr)
                delete table[i];
        }
    }

    void put(string fio, string id, string ph, string date) {
        int index = hash(ph);
        int end = index;
        if (table[index] == nullptr)
        {
            table[index] = new Node( fio,  id,  ph,  date);
            return;
        }
        else
        {
            count_collision++;
            ++index;
            while (index < size)
            {
                if (table[index] == nullptr)
                {
                    table[index] = new Node(fio, id, ph, date);
                    return;
                }
                ++index;

            }
            if (index == size)
            {
                index = 0;

                while (index < end)
                {
                    if (table[index] == nullptr)
                    {
                        table[index] = new Node(fio, id, ph, date);
                        return;
                    }
                    ++index;

                }
            }
        }
    }

    Node get(string ph) {
        int index = hash(key);
        while (table[index] != nullptr && table[index]->PhoneNum != ph) {
            index = (index + 1) % size;
        }
        if (table[index] == nullptr)
            return Node("not find");
        else
            return *table[index];
    }

    void remove(string ph) {
        int index = hash(ph);
        while (table[index] != nullptr) {
            if (table[index]->PhoneNum == ph)
                break;
            index = (index + 1) % size;
        }
        if (table[index] == nullptr)
            return;
        else {
            delete table[index];
            table[index] = nullptr;
        }
    }

    void print() {
        for (int i = 0; i < size; i++) {
            if (table[i] != nullptr)
                cout << i + 1 << ": " << *table[i] << endl;
        }
    }
};
*/
int get_random_addber()
{
    return rand() % 5;
}
string get_random_name()
{
    return (surnames[get_random_addber()] + " " + names[get_random_addber()] + " " + patronimyc[get_random_addber()]);
}
string get_random_ID()
{
    return ID[get_random_addber()];
}
string get_random_ph()
{
    return  ph_number[get_random_addber()];
}
string get_random_dates()
{
    return dates[get_random_addber()];
}
Node* create_random_human()
{
    Node* temp = new Node("not find");
    temp->FIO = get_random_name();
    temp->ID = get_random_ID();
    temp-> PhoneNum= get_random_ph();
    temp-> DateOfBirthday= get_random_dates();
    return temp;
}

void fill_array_random_humans(vector<Node*>& array, const int size)
{
    for (int i = 0; i < size; ++i)
        array[i] = create_random_human();
}
int main()
{
    setlocale(0, ".1251");
    int size;
    cout << "Введите количество элементов в массиве: ";
    cin >> size;

    cout << endl;

    vector<Node*> array;
    array.resize(size);

    //HashMap Table1(size);
    HashTable Table2(size);
    fill_array_random_humans(array, size);
    for (int i = 0; i < size; i++)
    {
        cout << i << ":\t" << *array[i] << endl;
        string FIO = array[i]->FIO;
        string ph = array[i]->PhoneNum;
        string ID = array[i]->ID;
        string dates = array[i]->DateOfBirthday;

        Table2.insert( FIO, ID,  ph, dates);
        //Table1.put(FIO,ID,ph,dates);
    }
    cout << endl << endl;
    Table2.print();
    cout << endl << endl; 
   // Table1.print();cout << endl << Table1.count_collision << " ";// << Table2.count_collision << endl;
    cout << endl << Table2.count_collision ;
    return 0;
}