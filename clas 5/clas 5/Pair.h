#pragma once
#include "object.h"
#include <string>
#include <iostream>
using namespace std;
class Pair : public object {
protected:
	int first;
	int second;
public:
	~Pair(void);
	Pair(void);
	Pair(int&, int&);
	Pair(Pair&);
	Pair operator+(Pair&);
	void showw() {
		cout << "Пара чисел: " << '(' << first << ',' << second << ')' << endl;
	}
	friend ostream& operator<<(ostream& stream, const Pair&);
	friend istream& operator>>(istream&, Pair&);
	Pair& operator=(const Pair& a);
	Pair getpair(int& t, int& r) {
		Pair a(t, r);
		return a;
	}
	int getfirst() {
		return this->first;
	}
	int getsecond() {
		return this->second;
	}
	int sum(int& t, int& p) {
		Pair a(t, p);
		return a.first + a.second;	
	}
};
