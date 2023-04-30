#pragma once
#include "object.h"
#include <iostream>
#include <string>
using namespace std;
class vector {
	object** beg;
	int size;
	int cur;
public:
	vector();
	vector(int);
	~vector();
	void add(object*);
	friend ostream& operator<<(ostream& out, const vector&);
};
