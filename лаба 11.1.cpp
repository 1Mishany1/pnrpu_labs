
#include <iostream>
using namespace std;
// структура для элемента списка
struct Node {
    int data; // данные элемента списка
    Node* next; // указатель на следующий элемент списка
};
// функция для добавления элемента в список
void addNode(Node*& head, int data) {
    Node* newNode = new Node; // создаем новый элемент списка
    newNode->data = data; // заполняем его данными
    newNode->next = NULL; // указываем, что это последний элемент списка
    if (head == NULL) { // если список пуст
        head = newNode; // новый элемент становится головой списка
    }
    else { // если список не пуст
        Node* current = head; // начинаем обход списка с головы
        while (current->next != NULL) { // идем до конца списка
            current = current->next;
        }
        current->next = newNode; // добавляем новый элемент в конец списка
    }
}
// функция для вывода элементов списка на экран
void printList(Node* head) {
    Node* current = head; // начинаем обход списка с головы
    while (current != NULL) { // пока не достигнут конец списка
        cout << current->data << " "; // выводим данные текущего элемента
        current = current->next; // переходим к следующему элементу списка
    }
    cout << endl;
}
int main() {
    setlocale(LC_ALL, "Rus");
    Node* head = NULL; // создаем пустой список
    // заполняем список данными
    addNode(head, 1);
    addNode(head, 2);
    addNode(head, 3);
    addNode(head, 4);
    addNode(head, 5);
    // выводим список на экран
    cout << "Исходный список: ";
    printList(head);
    int k ; // количество элементов, которые нужно удалить и добавить
    int num ; // номер элемента, начиная с которого нужно удалить и добавить
    // создаем массив на основе списка
    cout << "Число  элементов, которые нужно удалить: ";
    cin>>k;
    cout << "номер элемента, начиная с которого нужно удалить и добавить: ";
    cin >> num;
    int ch;
    int size = 0;
    Node* current = head;
    while (current != NULL) {
        size++;
        current = current->next;
    }
    int* arr = new int[size];
    current = head;
    int i = 0;
    while (current != NULL) {
        arr[i] = current->data;
        i++;
        current = current->next;
    }
    // удаляем К элементов, начиная с заданного номера
    cout << "После удаления: ";
    for (int i = num; i <= size - k; i++) {
        arr[i] = arr[i + k];
        for (int i = 0; i < size-k; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        
    }

    int m;
    int yi;
    cout << "Число  элементов, которые нужно добавить: ";
    cin >> m;
    cout << "номер элемента, начиная с которого нужно добавить: ";
    cin >> yi;
    // добавляем К элементов, начиная с заданного номера
    for (int i = yi; i < size+m; i++) {
        cin >> ch;
        arr[i+1] = ch;
        arr[i] = arr[i + 1];
        arr[i] = ch;
    }
    // выводим измененный массив на экран
    cout << "Измененный массив: ";
    for (int i = 0; i <= size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}