#include <iostream>
#include "Stack.h"
using namespace std;
int main() {
    setlocale(LC_ALL, "Rus");
    Stack s(6); // создаем стэк размера 6
    s.push(1); // добавляем элементы в стэк
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.print();
    int num;
    cout << "Ведите число на которое умножим: ";
    cin >> num;
    s.multiply(num); // умножаем все элементы стэка на число
    s.print();
    int value;
    cout << "Введдите число, которое запишем в начало: ";
    cin >> value;
    s.push_front(value); // добавляем элемент в начало стэка
    cout << "Стэк после добавления числа в начало: ";
    s.print();
    s.pop_back(); // удаляем последний элемент стэка
    cout << "Стэк после удаления числа в конце: ";
    s.print();
    return 0;
}