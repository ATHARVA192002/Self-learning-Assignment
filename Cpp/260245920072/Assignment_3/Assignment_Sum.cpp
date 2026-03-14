#include <iostream>
using namespace std;

int main(){
    int i, n, sum = 0;

    cout<<"enter the size of array: ";
    cin>>n;

    int num[n];  

    cout<<"enter the numbers: ";
    for( i=0; i<n; i++){
        cin>>num[i];
        sum = sum + num[i];
    }

    cout<<"Sum = "<<sum;
}