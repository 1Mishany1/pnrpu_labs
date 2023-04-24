#include <iostream>
#include <Header.h>
using namespace std;
void Header::Init(int a, int b) {
	first = a;
	second = b;
}
int Header::ipart() {
	return first * second;
}