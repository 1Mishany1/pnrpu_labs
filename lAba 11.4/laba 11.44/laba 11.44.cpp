#include <iostream>
#include <fstream>
#include<ctime>
using namespace std;
// Структура для хранения элементов списка
struct Node {
    int data;
    Node* next;
};
// Класс очереди на основе односвязного списка
class Queue {
private:
    Node* front;
    Node* rear;
public:
    Queue() {
        front = NULL;
        rear = NULL;
    }
    // Проверка на пустоту
    bool isEmpty() {
        if (front == NULL && rear == NULL)
            return true;
        else
            return false;
    }
    // Вставка элемента в конец очереди
    void enqueue(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;
        if (isEmpty()) {
            front = rear = newNode;
        }
        else {
            rear->next = newNode;
            rear = newNode;
        }
    }
    // Удаление элемента из начала очереди
    void dequeue() {
        if (isEmpty()) {
            cout << "Очередь пуста" << endl;
        }
        else {
            Node* temp = front;
            front = front->next;
            delete temp;
            if (front == NULL)
                rear = NULL;
        }
    }
    // Вывод элементов очереди
    void display() {
        if (isEmpty()) {
            cout << "Очередь пуста" << endl;
        }
        else {
            Node* temp = front;
            while (temp != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }
    // Запись списка в файл
    void writeToFile() {
        if (isEmpty()) {
            cout << "Очередь пуста" << endl;
        }
        else {
            ofstream myfile("queue.txt");
            if (myfile.is_open()) {
                Node* temp = front;
                while (temp != NULL) {
                    myfile << temp->data << " ";
                    temp = temp->next;
                }
                myfile.close();
                cout << "Список успешно записан в файл" << endl;
            }
            else {
                cout << "Не удалось открыть файл" << endl;
            }
        }
    }
    // Уничтожение списка
    void destroy() {
        if (isEmpty()) {
            cout << "Очередь пуста" << endl;
        }
        else {
            Node* temp = front;
            while (temp != NULL) {
                front = front->next;
                delete temp;
                temp = front;
            }
            rear = NULL;
            cout << "Список успешно уничтожен" << endl;
        }
    }
    // Восстановление списка из файла
    void restore() {
        ifstream myfile("queue.txt");
        if (myfile.is_open()) {
            int value;
            while (myfile >> value) {
                enqueue(value);
            }
            myfile.close();
            cout << "Список успешно восстановлен из файла" << endl;
        }
        else {
            cout << "Не удалось открыть файл" << endl;
        }
    }
};
int main() {
    setlocale(LC_ALL, "Rus");
    Queue q;
    int n, k, value;
    srand(time(NULL));
    // Заполнение очереди случайными числами
    for (int i = 0; i < 10; i++) {
        q.enqueue(rand() % 100);
    }
    cout << "Очередь до удаления: ";
    q.display();
    // Удаление K элементов
    cout << "Введите количество элементов для удаления: ";
    cin >> k;
    for (int i = 0; i < k; i++) {
        q.dequeue();
    }
    cout << "Очередь после удаления: ";
    q.display();
    // Добавление элемента
    cout << "Введите элемент для добавления: ";
    cin >> value;
    q.enqueue(value);
    cout << "Очередь после добавления: ";
    q.display();
    // Запись списка в файл
    q.writeToFile();
    // Уничтожение списка
    q.destroy();
    // Восстановление списка из файла
    q.restore();
    q.display();
    return 0;
}