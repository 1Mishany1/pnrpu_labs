#pragma once
#include "Pair.h"
using namespace std;
class complex : public Pair {
public:
	int m;
	int p;
	complex();
	complex(const int&, const int&);
	complex(complex&);
	~complex();
	void showw() {
		cout << "Комплексное число: " << '(' << m << ',' << p << "i)" << endl;
	}
	void show1() {

		cout << "Пара без мнимой части: " << getpair(this->m, this->p) << "sum: " << sum(this->m, this->p) << endl;
	}
	complex operator*(complex&);
	complex operator-(complex&);
	friend ostream& operator<<(ostream& stream, const complex& tm);
	friend istream& operator>>(istream&, complex&);
};
