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
	//������������� ��������
	Time& operator=(const Time&);
	Time operator+(const Time&);//����������� ��������
	Time operator-(const Time&);
	//���������� ������� �����-������
	friend istream& operator>>(istream& in, Time& t);
	friend ostream& operator<<(ostream& out, const Time& t);
};
