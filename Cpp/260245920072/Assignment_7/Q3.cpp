#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class DecimalToBinary {
private:
    string binaryResult;

public:
    void convert(int n) {
        if (n == 0) {
            binaryResult = "0";
            return;
        }

        string temp = "";
        while (n > 0) {
            int remainder = n % 2;
            temp += to_string(remainder);
            n = n / 2;
        }

        reverse(temp.begin(), temp.end());
        binaryResult = temp;
    }

    void display() {
        cout << "Binary Equivalent: " << binaryResult << endl;
    }
};

int main() {
    DecimalToBinary obj;
    int decimalNum;

    cout << "Enter a decimal number: ";
    cin >> decimalNum;

    if (decimalNum < 0) {
        cout << " enter a positive num" << endl;
    } else {
        obj.convert(decimalNum);
        obj.display();
    }

    return 0;
}