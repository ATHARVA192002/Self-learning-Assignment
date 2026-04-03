#include <iostream>
using namespace std;

class Printer {
protected:
    string brand;
public:
    Printer(string b) : brand(b) {}
};

class Scanner {
protected:
    int dpi;
public:
    Scanner(int d) : dpi(d) {}
};

class AllInOne : public Printer, public Scanner {
public:
    AllInOne(string b, int d) : Printer(b), Scanner(d) {}

    friend void show(AllInOne obj);
};

void show(AllInOne obj) {
    cout << "Brand: " << obj.brand << ", DPI: " << obj.dpi << endl;
}

int main() {
    AllInOne p("HP", 600);
    show(p);
    return 0;
}
