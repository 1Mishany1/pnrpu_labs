#include "vector.h"
#include <iostream>
#include <string>
using namespace std;
vector::vector() {
	beg = 0;
	size = 0;
	cur = 0;
};
vector::~vector() {
	if (beg != 0) delete[]beg;
	beg = 0;
};
vector::vector(int n) {
	beg = new object * [n];
	cur = 0;
	size = n;
};
void vector::add(object* p) {
	if (cur < size) {
		beg[cur] = p;
		cur++;
	}
};
ostream& operator<<(ostream& out, const vector& v) {
	if (v.size == 0) out << "empty" << endl;
	object** p = v.beg;
	for (int i = 0; i < v.cur; i++) {
		(*p)->showw();
		p++;
	}
	return out;
}
