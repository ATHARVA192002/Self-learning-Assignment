#include <iostream>
using namespace std;
int main(){
    int i, n, large;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"enter the numbers";
    for(i=0; i<n; i++){
        cin>>arr[i];
        large=arr[0];
        if(arr[i]>arr[0]){
            large = arr[i];
        }
    }
    cout<<large;
}