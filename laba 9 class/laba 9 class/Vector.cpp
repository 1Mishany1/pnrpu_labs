#include "Vector.h"
#include "Error.h"
#include <iostream>
using namespace std;
Vector::Vector(int s) {
	if (s > MAX_SIZE) throw error("Vector lenght more than MAXSIZE\n");
	size = s;
	beg = new int[s];
	for (int i = 0; i < size; i++) {
		beg[i] = 0;
	}
};
Vector::Vector(const Vector& a) {
	size = a.size;
	beg = new int[size];
	for (int i = 0; i < size; i++) {
		beg[i] = a.beg[i];
	}
};
Vector::~Vector() {
	if (beg != 0) delete[]beg;
};
Vector::Vector(int s, int* mas) {
	if (s > MAX_SIZE) throw error("Vector lenght more than MAXSIZE\n");
	size = s;
	beg = new int[s];
	for (int i = 0; i < size; i++) {
		beg[i] = mas[i];
	}
};
Vector& Vector::operator=(const Vector& a) {
	if (this == &a) return *this;
	if (beg != 0)
		delete[]beg;
	size = a.size;
	beg = new int[size];
	for (int i = 0; i < size; i++) {
		beg[i] = a.beg[i];
	}
	return *this;
};
int Vector:: operator()() {
	if (size == 0) throw error("Vector is empty");
	else
		return size;
};
Vector Vector::operator--(int) {
	if (size == 0) throw error("Vector is empty");
	if (size == 1) {
		size = 0;
		delete[]beg;
		beg = 0;
		return *this;
	}
	Vector tmp(size, beg);
	delete[]beg;
	size--;
	beg = new int[size];
	for (int i = 0; i < size; i++)
		beg[i] = tmp.beg[i];
	return *this;
};
Vector Vector::operator--() {
	if (size == 0) throw error("Vector is empty");
	if (size == 1) {
		size = 0;
		delete[]beg;
		beg = 0;
		return *this;
	}
	Vector tmp(size, beg);
	delete[]beg;
	size--;
	beg = new int[size];
	for (int i = 0; i < size; i++)
		beg[i] = tmp.beg[i + 1];
	return *this;
};
ostream& operator<<(ostream& out, const Vector& a) {
	if (a.size == 0) out << "Empty\n";
	else {
		for (int i = 0; i < a.size; i++)
			out << a.beg[i] << " ";
		out << endl;
	}
	return out;
};
istream& operator>>(istream& in, Vector& a) {
	cout << "¬ведите элементы: " << endl;
	for (int i = 0; i < a.size; i++) {
		cout << '>';
		in >> a.beg[i];
	}
	return in;
};
int Vector::operator[](int i) {
	if (i < 0)throw error("index < 0");
	if (i >= size)throw error("index > size!");
	return beg[i];
};
Vector Vector::operator+(int a) {
	Vector temp(size);
	for (int i = 0; i < size; i++)
		temp.beg[i] = beg[i] + a;
	return temp;
};
