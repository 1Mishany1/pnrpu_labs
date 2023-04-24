#include <iostream>
#include<string>
using namespace std;

class Time
{
	int min, sec;
public:
	Time();
	Time(int, int);
	Time(const Time& );
	~Time();
	int get_min();
	int get_sec();
	void set_min(int );
	void set_sec(int );
	void show();
	//перегруженные операции
	Time& operator=(const Time&);
	Time operator+(const Time&);//постфиксная операция
	Time operator-(const Time&);
	//глобальные функции ввода-вывода
	friend istream& operator>>(istream& in, Time& t);
	friend ostream& operator<<(ostream& out, const Time& t);
};
