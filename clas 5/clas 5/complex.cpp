#include "complex.h"
#include <string>
#include <fstream>
using namespace std;
complex::~complex() {

}
complex::complex() {

}
complex::complex(const int& m, const int& p) {
	this->m = m;
	this->p = p;
}
complex::complex(complex& tmp) {
	this->m = tmp.m;
	this->p = tmp.p;
}
complex complex::operator*(complex& t) {
	int tmp = this->m * t.m - (this->p * t.p);
	int tmp1 = this->m * t.p + (this->p * t.m);
	complex a(tmp, tmp1);
	return a;
}
complex complex ::operator-(complex& tp) {
	int tmp = this->m - this->p;
	int tmp1 = tp.m - tp.p;
	complex a(tmp, tmp1);
	return a;
}
ostream& operator<<(ostream& stream, const complex& tm) {
	stream << '(' << tm.m << ',' << tm.p << "i)";
	return stream;
};
istream& operator>>(istream& stream1, complex& tm) {
	stream1 >> tm.m;
	stream1 >> tm.p;
	return stream1;
};