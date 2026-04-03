#include <iostream>

using namespace std;

class PatternGenerator {
public:
    void printHollowSquare(int n) {
        cout << "enter a num: " << endl;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (i == 1 || i == n || j == 1 || j == n) {
                    cout << "* ";
                } else {
                    cout << "  "; 
                }
            }
            cout << endl;
        }
    }
};

int main() {
    PatternGenerator p;
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    p.printHollowSquare(n);

    return 0;
}