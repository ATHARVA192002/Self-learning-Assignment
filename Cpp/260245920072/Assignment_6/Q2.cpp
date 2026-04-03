#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enetr number of n: ";
    cin >> n;

    int arr[n];

    cout<<"enter numbers in array";

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int firstL, secondL;

    if(arr[0] > arr[1]) {
        firstL = arr[0];
        secondL = arr[1];
    } else {
        firstL = arr[1];
        secondL = arr[0];
    }

    for(int i = 2; i < n; i++) {
        if(arr[i] > firstL) {
            secondL = firstL;
            firstL = arr[i];
        }
        else if(arr[i] > secondL && arr[i] != firstL) {
            secondL = arr[i];
        }
    }

    cout << secondL;

    return 0;
}