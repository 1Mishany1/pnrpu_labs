#include <iostream>
#include "Stack.h"
using namespace std;
int main() {
    setlocale(LC_ALL, "Rus");
    Stack s(6); // ������� ���� ������� 6
    s.push(1); // ��������� �������� � ����
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.print();
    int num;
    cout << "������ ����� �� ������� �������: ";
    cin >> num;
    s.multiply(num); // �������� ��� �������� ����� �� �����
    s.print();
    int value;
    cout << "�������� �����, ������� ������� � ������: ";
    cin >> value;
    s.push_front(value); // ��������� ������� � ������ �����
    cout << "���� ����� ���������� ����� � ������: ";
    s.print();
    s.pop_back(); // ������� ��������� ������� �����
    cout << "���� ����� �������� ����� � �����: ";
    s.print();
    return 0;
}