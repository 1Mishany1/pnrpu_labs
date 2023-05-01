#include "Time.h"
#include <iostream>
using namespace std;
Time operator+(Time a, int n) {
	int t = a.min * 60 + a.sec + n;
	a.min = t / 60;
	a.sec = t % 60;
	return a;
}
Time Time::operator+(Time a) {
	int t = min * 60 + sec;
	int kt = a.min * 60 + a.sec;
	t += kt;
	Time tmp(t / 60, t % 60);
	return tmp;
};
ostream& operator<<(ostream& out, const Time& a) {
	if (a.sec < 10 && a.sec >= 0) {
		if (a.min < 10 && a.min >= 0)
			out << '0' << a.min << ":0" << a.sec;
		else out << a.min << ":0" << a.sec;
	}
	else if (a.min < 10 && a.min >= 0) {
		out << '0' << a.min << ':' << a.sec;
	}
	if (a.min >= 10 && a.min < 60 && a.sec >= 10 && a.sec < 60)
		out << a.min << ':' << a.sec;
	if (a.min > 59 || a.sec > 59)
		out << "ќшибка!";
	return out;
};
istream& operator>>(istream& in, Time& a) {
	cout << "¬ведите минуты: "; in >> a.min;
	cout << "¬ведите секунды: "; in >> a.sec;
	return in;
};
Time::Time() {
	min = sec = 0;
};
Time::Time(int min, int sec) {
	this->min = min;
	this->sec = sec;
};
Time::Time(const Time& a) {
	sec = a.sec;
	min = a.min;
};
Time& Time:: operator=(const Time& a) {
	min = a.min;
	sec = a.sec;
	return *this;
};
