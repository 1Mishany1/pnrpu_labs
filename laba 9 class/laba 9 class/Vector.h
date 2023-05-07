#pragma once
#include <iostream>
using namespace std;
const int MAX_SIZE = 30;
class Vector {
	int size;
	int* beg;
public:
	Vector() { size = 0; beg = 0; };
	Vector(int);
	Vector(int, int*);
	Vector(const Vector&);
	~Vector();
	Vector& operator=(const Vector&);
	int operator[](int);
	Vector operator+(int);
	Vector operator--();
	Vector operator--(int);
	int operator()();
	friend ostream& operator<<(ostream& out, const Vector&);
	friend istream& operator>>(istream& in, Vector&);
};

