#pragma once
#include<iostream>
using namespace std;
class Time {
	int min, sec;
public:
	Time(void);
	Time(int, int);
	virtual ~Time() {}
	Time(const Time&);
	Time& operator=(const Time&);
	Time operator+(Time);
	friend Time operator+(Time, int);
	friend ostream& operator<<(ostream& out, const Time& a);
	friend istream& operator>>(istream& in, Time& a);
};
