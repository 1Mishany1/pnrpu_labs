#pragma once
#include <string>
#include <iostream>
using namespace std;
class error {
	string str;
public:
	error(string str) { this->str = str; };
	void what() { cout << str << endl; };
};


