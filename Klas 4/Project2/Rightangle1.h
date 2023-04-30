#pragma once
#include "Pair1.h"
class complex : public Pair {
public:
	int m;
	int p;
	complex();
	complex(const int&, const int&);
	complex(complex&);
	~complex();
	void show() {
		cout << '(' << this->m << ',' << this->p << "i)" << endl;
	}
	void show1() {

		cout << getpair(this->m, this->p) << "sum: " << sum(this->m, this->p) << endl;
	}
	complex operator*(complex&);
	complex operator-(complex&);
	friend ostream& operator<<(ostream& stream, const complex& tm);
	friend istream& operator>>(istream&, complex&);
};

