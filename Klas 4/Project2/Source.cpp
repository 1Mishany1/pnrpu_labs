#include "Pair1.h"
#include "Rightangle1.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	Pair a, b;
	cout << "¬ведите первую пару чисел: ";
	cin >> a;
	cout << "¬ведите вторую пару чисел: ";
	cin >> b;
	cout << "ѕерва€: " << a << "\t" << "¬тора€: " << b << endl;
	cout << "a+b " << a + b << endl;
	a = b;
	cout << "a=b " << a << endl;
	complex d, r;
	cout << "¬ведите комплексное число: ";
	cin >> d;
	cout << "¬ведите комплексное число: ";
	cin >> r;
	cout << r << d << endl;
	cout << "r * d = " << r * d << endl;
	cout << "r - d = " << r - d << endl;
	r.show1();
	d.show1();
	return 0;
}
