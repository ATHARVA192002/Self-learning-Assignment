#include <iostream>
using namespace std;

class Date {
    int d, m, y;
public:
    Date(int dd=1, int mm=1, int yy=2000) : d(dd), m(mm), y(yy) {}

    void display() {
        cout << d << "/" << m << "/" << y << endl;
    }

    Date operator+(int days) {
        return Date(d + days, m, y);
    }
};

class Time {
    int h, m, s;
public:
    Time(int hh=0, int mm=0, int ss=0) : h(hh), m(mm), s(ss) {}

    void display() {
        cout << h << ":" << m << ":" << s << endl;
    }

    Time operator+(int sec) {
        return Time(h, m, s + sec);
    }
};

int main() {
    Date d1(1,1,2024);
    d1 = d1 + 5;
    d1.display();

    Time t1(10,20,30);
    t1 = t1 + 40;
    t1.display();

    return 0;
}
