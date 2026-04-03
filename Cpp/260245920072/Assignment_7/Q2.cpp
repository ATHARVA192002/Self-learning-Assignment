#include <iostream>
using namespace std;

class FindFactorial {
private:
    int num;
    long long fact;

public:

    void accept() {
        cout << "Enter a num: ";
        cin >> num;
    }

    void calculateFactorial() {
        fact = 1; 
        
        if (num < 0) {
            cout << "invalid input" << endl;
        } else {
            for (int i = 1; i <= num; i++) {
                fact *= i;
            }
        }
    }

    void display() {
        if (num >= 0) {
            cout << "The Factorial of " << num << " is: " << fact << endl;
        }
    }
};

int main() {
    FindFactorial obj;

    obj.accept();     
    obj.calculateFactorial(); 
    obj.display();    

    return 0;
}