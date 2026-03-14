#include <iostream>
using namespace std;
int main(){
    int i, n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the numbers: \n";
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int j=n-1; j>=0;j--){
        cout<<arr[j];
    }
}