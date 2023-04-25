#include <iostream>
#include<fstream>
using namespace std;
//Структура для элемента списка
struct Node {
    int data; //Данные элемента
    Node* prev; //Указатель на предыдущий элемент
    Node* next; //Указатель на следующий элемент
};
//Класс для двунаправленного списка
class DoublyLinkedList {
private:
    Node* head; //Указатель на головной элемент
    Node* tail; //Указатель на последний элемент
public:
    //Конструктор
    DoublyLinkedList() {
        head = NULL;
        tail = NULL;
    }
    //Добавление элемента в конец списка
    void append(int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->prev = tail;
        newNode->next = NULL;
        if (tail != NULL) {
            tail->next = newNode;
        }
        tail = newNode;
        if (head == NULL) {
            head = newNode;
        }
    }
    //Удаление элементов из одномерного массива, начиная с заданного номера
    void removeFromArray(int index, int count) {
        int i = 0;
        Node* current = head;
        while (current != NULL && i < index) {
            current = current->next;
            i++;
        }
        if (current != NULL) {
            for (int j = 0; j < count; j++) {
                if (current->prev != NULL) {
                    current->prev->next = current->next;
                }
                else {
                    head = current->next;
                }
                if (current->next != NULL) {
                    current->next->prev = current->prev;
                }
                else {
                    tail = current->prev;
                }
                Node* temp = current;
                current = current->next;
                delete temp;
            }
        }
    }
    //Добавление элементов в одномерный массив, начиная с заданного номера
    void insertIntoArray(int index, int count) {
        int i = 0;
        Node* current = head;
        while (current != NULL && i < index) {
            current = current->next;
            i++;
        }
        if (current != NULL) {
            for (int j = 0; j < count; j++) {
                Node* newNode = new Node;
                newNode->data = j;
                newNode->prev = current->prev;
                newNode->next = current;
                if (current->prev != NULL) {
                    current->prev->next = newNode;
                }
                else {
                    head = newNode;
                }
                current->prev = newNode;
            }
        }
    }
    //Вывод списка в консоль
    void printList() {
        Node* current = head;
        while (current != NULL) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
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
            append(value); // добавляем новый узел с прочитанным значением
        }
        file.close();
    }
};
int main() {
    setlocale(LC_ALL, "Rus");
    DoublyLinkedList list;
    //Заполнение списка
    int n;
    cout << "Количество элементов списка: ";
    cin >> n;
    for (int i = 0; i < n; i++) { // заполнение списка случайными значениями
        list.append(rand() % 100 + 1);
    }
    list.printList(); 
    int index, count;
    cout << "Введите номер индекса, с которого начать удаление: ";
    cin >> index;
    cout << "Введите количество элементов для удаления: ";
    cin >> count;
    list.removeFromArray(index, count);
    list.printList();
    //Добавление элементов в список, начиная с заданного номера
    cout << "Введите номер индекса, с которого начать добавление: ";
    cin >> index;
    cout << "Введите количество элементов для добавления: ";
    cin >> count;
    list.insertIntoArray(index, count);
    list.printList(); //Вывод списка после удаления и добавления элементов
    list.writeListToFile("list.txt"); // запись списка в файл
    list.destroyList(); // уничтожение списка
    list.restoreListFromFile("list.txt"); // восстановление списка из файла
    list.printList();
    return 0;
}