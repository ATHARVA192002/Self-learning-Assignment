#include <iostream>
using namespace std;

class Outer {
public:
    int x = 10;

    class Inner {
    public:
        void display() {
            cout << "Inner class function\n";
        }
    };
};

int main() {
    Outer::Inner obj;
    obj.display();
    return 0;
}
