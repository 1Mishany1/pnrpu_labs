#include<iostream>
#include <fstream>
using namespace std;
struct Node { // структура элемента однонаправленного списка
    int data;
    Node* next;
};
class LinkedList { // класс однонаправленного списка
private:
    Node* head;
public:
    LinkedList() { // конструктор
        head = NULL;
    }
    void addNode(int val) { // добавление элемента в конец списка
        Node* newNode = new Node;
        newNode->data = val;
        newNode->next = NULL;
        if (head == NULL) {
            head = newNode;
        }
        else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    void display() { // вывод списка на экран
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void deleteElements(int index, int K) { // удаление K элементов начиная с заданного индекса
        Node* temp = head;
        if (index == 0) { // если удаляем первый элемент
            for (int i = 0; i < K; i++) {
                head = head->next;
                delete temp;
                temp = head;
            }
            return;
        }
        for (int i = 0; i < index - 1; i++) { // ищем элемент, предшествующий тому, который нужно удалить
            temp = temp->next;
        }
        Node* delNode = temp->next; // элемент, который нужно удалить
        for (int i = 0; i < K; i++) { // удаляем K элементов
            temp->next = delNode->next;
            delete delNode;
            delNode = temp->next;
        }
    }
    void addElements(int index, int K) { // добавление K элементов начиная с заданного индекса
        Node* temp = head;
        for (int i = 0; i < index - 1; i++) { // ищем элемент, после которого будем добавлять новые элементы
            temp = temp->next;
        }
        Node* prevNode = temp; // элемент, после которого будем добавлять новые элементы
        Node* nextNode = temp->next; // следующий элемент
        for (int i = 0; i < K; i++) { // добавляем K элементов
            Node* newNode = new Node;
            newNode->data = rand() % 100 + 1; // случайное значение элемента
            prevNode->next = newNode;
            newNode->next = nextNode;
            prevNode = newNode;
        }
    }
    void writeListToFile(string filename) {
        ofstream file(filename);
        if (head == NULL || !file.is_open()) { // если список пуст или файл не открыт
            return;
        }
        Node* current = head; // указатель на текущий узел
        while (current != NULL) { // пока не достигнут конец списка
            file << current->data << " "; // записываем данные текущего узла в файл
            current = current->next; // переходим на следующий узел
        }
        file.close();
    }
    // функция уничтожения списка
    void destroyList() {
        Node* current = head; // указатель на текущий узел
        while (current != NULL) { // пока не достигнут конец списка
            Node* next = current->next; // сохраняем указатель на следующий узел
            delete current; // удаляем текущий узел
            current = next; // переходим на следующий узел
        }
        head = NULL; // список становится пустым
    }
    // функция восстановления списка из файла
    void restoreListFromFile(string filename) {
        ifstream file(filename);
        if (!file.is_open()) { // если файл не открыт
            return;
        }
        destroyList(); // уничтожаем текущий список
        int value;
        while (file >> value) { // читаем данные из файла
            addNode(value); // добавляем новый узел с прочитанным значением
        }
        file.close();
    }
};
int main() {
    LinkedList list;
    setlocale(LC_ALL, "RUS");
    int n;
    cout << "Длина списка: ";
    cin >> n;
    for (int i = 0; i < n; i++) { // заполнение списка случайными значениями
        list.addNode(rand() % 100 + 1);
    }
    cout << "Список: ";
    list.display();
    int index, K;
    cout << "Введите номер индекса с которого нужно начать удаление: ";
    cin >> index;
    cout << "Сколько чисел удалить : ";
    cin >> K;
    list.deleteElements(index, K);
    cout << "После удаления: ";
    list.display();
    cout << "Введите номер индекса с котоого нужно начать добавление: ";
    cin >> index;
    cout << "Сколько чисел добавить: ";
    cin >> K;
    list.addElements(index, K);
    cout << "После добавления: ";
    list.display();
    list.writeListToFile("list.txt"); // запись списка в файл
    list.destroyList(); // уничтожение списка
    list.restoreListFromFile("list.txt"); // восстановление списка из файла
    list.display();
    return 0;
}