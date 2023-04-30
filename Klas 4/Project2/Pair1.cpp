#include "Pair1.h"
Pair::~Pair() {
}
Pair::Pair() {
	first = 0;
	second = 0;
}
Pair::Pair(int& first, int& second) {
	this->first = first;
	this->second = second;
}
Pair::Pair(Pair& tmp) {
	this->first = tmp.first;
	this->second = tmp.second;
}
Pair Pair:: operator+(Pair& p) {
	int tmp = this->first + p.first;
	int tmp1 = this->second + p.second;
	Pair a(tmp, tmp1);
	return a;
}
ostream& operator<<(ostream& stream, const Pair& tm) {
	stream << '(' << tm.first << ',' << tm.second << ')';
	return stream;
};
istream& operator>>(istream& stream1, Pair& tm) {
	stream1 >> tm.first;
	stream1 >> tm.second;
	return stream1;
};
Pair& Pair::operator=(const Pair& a) {
	this->first = a.first;
	this->second = a.second;
	return *this;
}
