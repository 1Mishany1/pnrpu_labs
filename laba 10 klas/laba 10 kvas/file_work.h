#pragma once
#include "Time.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int make_file(const char* f_minutes)
{
	fstream stream(f_minutes, ios::out | ios::trunc);
	if (!stream)return -1;
	int n;
	Time p;
	cout << "Введите новое время : "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> p;
		stream << p << "\n";
	}
	stream.close();
	return n;
}
int print_file(const char* f_minutes)
{
	fstream stream(f_minutes, ios::in);
	if (!stream)return -1;
	Time p; int i = 0;
	while (stream >> p)
	{
		cout << p << "\n";
		i++;
	}
	stream.close();
	return i;
}
int del_file(const char* f_minutes, int k)
{
	fstream temp("temp", ios::out);
	fstream stream(f_minutes, ios::in);
	if (!stream)return -1;
	int i = 0; Time p;
	while (stream >> p)
	{
		if (stream.eof())break;
		i++;
		
		if (i != k) temp << p;
	}
	stream.close(); temp.close();
	remove(f_minutes);
	rename("temp", f_minutes);
	return i;
}
int add_file(const char* f_minutes, int count, Time pp)
{
	fstream temp("temp", ios::out);
	fstream stream(f_minutes, ios::in);
	if (!stream)return -1;
	Time p; int i = 0, l = 0;
	while (stream >> p)
	{
		if (stream.eof())break;
		i++;
		if (i == 1)
		{
			for (int j = 0; j < count; j++)
			{
				Time new_Time;
				cout << "Введите новое время" << endl;
				cin >> new_Time;
				temp << new_Time;
				l++;
			}
		}
		temp << p;
	}
	stream.close(); temp.close();
	remove(f_minutes);
	rename("temp", f_minutes);
	return l;
}
int add_end(const char* f_minutes, Time pp)
{
	fstream stream(f_minutes, ios::app);
	if (!stream)return -1;
	stream << pp; 
	return 1;
}
int change_file(const char* f_minutes, int k, Time pp)
{
	fstream temp("temp", ios::out);
	fstream stream(f_minutes, ios::in);
	if (!stream)return -1;
	Time p; int i = 0, l = 0;
	char x;
	while (stream >> p)
	{
		if (stream.eof())break;
		i++;
		if (i == k)
		{
			cout << p << "Если хотите продолжить,подтвердите[y/n]?\n";
			cin >> x;
			if (x == 'n' || x == 'N')break;
			temp << pp;
			l++;
		}
		else temp << p;
	}
	stream.close(); temp.close();
	remove(f_minutes);
	rename("temp", f_minutes);
	return l;
}
