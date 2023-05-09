#pragma once
#include <iostream>
using namespace std;
class Stack {
private:
    int* data; // указатель на динамический массив
    int size; // размер стэка
    int top; // индекс верхнего элемента стэка
public:
    // Конструктор по умолчанию
    Stack() {
        data = nullptr;
        size = 0;
        top = -1;
    }
    // Конструктор с параметром - размером стэка
    Stack(int n) {
        size = n;
        data = new int[size];
        top = -1;
    }
    // Деструктор
    ~Stack() {
        delete[] data;
    }
    // Метод добавления элемента в стэк
    void push(int value) {
        if (top == size - 1) { // проверяем, не полон ли стэк
            cout << "Stack overflow!" << endl;
            return;
        }
        top++;
        data[top] = value;
    }

    // Метод умножения всех элементов стэка на число
    void multiply(int num) {
        for (int i = 0; i <= top; i++) {
            data[i] *= num;
        }
    }
    // Метод добавления элемента в начало стэка
    void push_front(int value) {
        if (top == size - 1) { // проверяем, не полон ли стэк
            cout << "Stack overflow!" << endl;
            return;
        }
        for (int i = top; i >= 0; i--) {
            data[i + 1] = data[i];
        }
        top++;
        data[0] = value;
    }
    // Метод удаления последнего элемента стэка
    void pop_back() {
        if (top == -1) { // проверяем, не пуст ли стэк
            cout << "Stack underflow!" << endl;
            return;
        }
        top--;
    }
    void print() {
        for (int i = 0; i <= top; i++) { // выводим все элементы стэка
            cout << data[i] << " ";
        }
        cout << endl;
    }
    // Перегрузка оператора [] для доступа к элементам стэка по индексу
    int& operator[](int index) {
        return data[index];
    }
};