#include "Pair1.h"
#include "Rightangle1.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	Pair a, b;
	cout << "������� ������ ���� �����: ";
	cin >> a;
	cout << "������� ������ ���� �����: ";
	cin >> b;
	cout << "������: " << a << "\t" << "������: " << b << endl;
	cout << "a+b " << a + b << endl;
	a = b;
	cout << "a=b " << a << endl;
	complex d, r;
	cout << "������� ����������� �����: ";
	cin >> d;
	cout << "������� ����������� �����: ";
	cin >> r;
	cout << r << d << endl;
	cout << "r * d = " << r * d << endl;
	cout << "r - d = " << r - d << endl;
	r.show1();
	d.show1();
	return 0;
}
