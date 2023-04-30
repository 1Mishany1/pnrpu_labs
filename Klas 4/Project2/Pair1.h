#pragma once
#include <iostream>
#include <fstream>
using namespace std;
class Pair {
protected:
	int first;
	int second;
public:
	~Pair();
	Pair();
	Pair(int&, int&);
	Pair(Pair&);
	Pair operator+(Pair&);
	void Showpair() {
		cout << this->first << this->second << endl;
	}
	friend ostream& operator<<(ostream& stream, const Pair& tm);
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

