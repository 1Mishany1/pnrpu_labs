#include "object.h"
#include "Pair.h"
#include "complex.h"
#include "vector.h"
#include <string>
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
	complex d, r;
	cout << "¬ведите комплексное число: ";
	cin >> d;
	cout << "¬ведите комплексное число: ";
	cin >> r;
	cout << r << d << endl;
	cout << "r * d = " << r * d << endl;
	cout << "r - d = " << r - d << endl;
	d.show1();
	r.show1();
	a.showw();
	b.showw();
	d.showw();
	r.showw();
	vector v(5);
	Pair t;
	cin >> t;
	complex y;
	cin >> y;
	object* p = &t;
	v.add(p);
	p = &y;
	v.add(p);
	cout << v;
	return 0;
}
