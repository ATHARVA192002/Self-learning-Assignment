#include <iostream>
using namespace std;
int main(){
    int i, n, evenCount=0,oddCount=0;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the numbers: \n";
    for(i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            evenCount++;
        }else{
            oddCount++;
        }
    }
    cout<<"number of even numbers: "<<evenCount;
    cout<<"\nnumber of odd numbers: "<<oddCount;
}