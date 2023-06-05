#pragma once
#include <iostream>
#include "Error.h"
using namespace std;
class Time {
private:
    int min;
    int sec;
public:
    Time() {
        min = 0;
        sec = 0;
    };
    Time(int, int);
    ~Time();
    bool operator>(Time& p) {
        if (this->min != p.min)
            return this->min > p.min;
        else return this->sec > p.sec;
    };
    bool operator<(Time& p) {
        if (this->min != p.min)
            return this->min < p.min;
        else return this->sec < p.sec;
    };
    void setmin(int min) {
        if (min < 60 && min >= 0)
            this->min = min;
    };
    void setsec(int sec) {
        if (sec < 60 && sec >= 0)
            this->sec = sec;
    };
    int getmin() {
        return min;
    };
    int getsec() {
        return sec;
    };
    friend ostream& operator<<(ostream& stream, const Time& tm);
    friend istream& operator>>(istream& in, Time& tm);
    Time operator-(int p) {
        if (this->sec >= p)
            return Time(this->min, this->sec - p);
        else {
            int tmp = this->min * 60 + this->sec - p;
            return Time(tmp / 60, tmp % 60);
        }
    };
    Time operator+(Time& p) {
        if (this->min + p.min < 60 && this->sec + p.sec)
            return Time(this->min + p.min, this->sec + p.sec);
        else if (this->min + p.min < 60) {
            int tmp = this->min * 60 + p.min * 60 + this->sec + p.sec;
            return Time(tmp / 60, tmp % 60);
        }
        else throw error("ÍÅÄÎÏÓÑÒÈÌÎÅ ÇÍÀ×ÅÍÈÅ ÄËß ÂĞÅÌÅÍÈ!");
    };
    bool operator==(Time& t) {
        return this->min == t.min && this->sec == t.sec;
    };
    bool operator !=(Time& t) {
        return !(this->min == t.min && this->sec == t.sec);
    };

};
istream& operator>>(istream& in, Time& tm) {
    cout << "Ââåäèòå ìèíóòû è ñåêóíäû: ";
    in >> tm.min >> tm.sec;
    if (tm.min < 60 && tm.sec < 60 && tm.min >= 0 && tm.sec >= 0)
        return in;
    else throw error("ÍÅÄÎÏÓÑÒÈÌÎÅ ÇÍÀ×ÅÍÈÅ ÄËß ÂĞÅÌÅÍÈ!");
};
Time::Time(int min, int sec) {
    if (min < 60 && min >= 0 && sec >= 0 && sec < 60) {
        this->min = min;
        this->sec = sec;
    }
    else throw error("ÍÅÄÎÏÓÑÒÈÌÎÅ ÇÍÀ×ÅÍÈÅ ÄËß ÂĞÅÌÅÍÈ!");
};
Time::~Time() {

};

ostream& operator<<(ostream& stream, const Time& tm) {
    if (tm.sec >= 10 && tm.min >= 10)
        stream << tm.min << ':' << tm.sec;
    else if (tm.sec < 10 && tm.sec >= 0 && tm.min >= 10)
        stream << tm.min << ":0" << tm.sec;
    else if (tm.sec < 10 && tm.sec >= 0 && tm.min < 10 && tm.min >= 0)
        stream << '0' << tm.min << ":0" << tm.sec;
    else if (tm.sec >= 10 && tm.min < 10 && tm.min >= 0)
        stream << '0' << tm.min << ':' << tm.sec;
    return stream;
};


