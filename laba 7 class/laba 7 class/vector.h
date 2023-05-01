#pragma once
#include <iostream>
using namespace std;
template <class T>
class vector {
private:
	int size;
	T* data;

public:
	vector(int s, T k);
	vector(const vector<T>& a);
	~vector();
	vector();
	vector& operator=(const vector<T>& a);
	T& operator[](int index);
	vector operator*(const T k);
	vector operator+(const T k);
	int operator()();
	friend ostream& operator<< <>(ostream& out, const vector<T>& a);
	friend istream& operator>> <>(istream& in, vector<T>& a);
};
template <class T>
vector<T> vector<T> :: operator+(const T k) {
	vector<T> tmp(size, k);
	for (int i = 0; i < size; i++)
		tmp.data[i] = data[i] + k;
	return tmp;
};
template <class T>
vector<T>::vector() {
	size = 0;
	data = 0;
}
template <class T>
vector<T>::vector(int s, T k) {
	size = s;
	data = new T[size];
	for (int i = 0; i < size; i++)
		data[i] = k;
};
template <class T>
vector<T>::vector(const vector<T>& a) {
	size = a.size;
	data = new T[size];
	for (int i = 0; i < size; i++)
		data[i] = a.data[i];

};
template <class T>
vector<T>::~vector() {
	delete[] data;
	data = 0;
};
template <class T>
vector<T>& vector<T>:: operator=(const vector<T>& a) {
	if (this == &a)
		return *this;
	size = a.size;
	if (data != 0) delete[] data;
	data = new T[size];
	for (int i = 0; i < size; i++)
		data[i] = a.data[i];
	return *this;
};
template <class T>
T& vector<T>:: operator[](int index) {
	if (index < size || index>0) return data[index];
	else cout << "Такого индекса нет!";
};
template <class T>
vector<T> vector<T>:: operator*(const T k) {
	vector<T> tmp(size, k);
	for (int i = 0; i < size; i++)
		tmp.data[i] += data[i] * k;
	return tmp;
};
template <class T>
int vector<T>:: operator()() {
	return size;
};
template <class T>
ostream& operator<<(ostream& out, const vector<T>& a) {
	for (int i = 0; i < a.size; i++)
		out << a.data[i] << " ";
	return out;
};
template <class T>
istream& operator>>(istream& in, vector<T>& a) {
	for (int i = 0; i < a.size; i++)
		in >> a.data[i];
	return in;
};

