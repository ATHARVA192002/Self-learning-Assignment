#include <iostream>
using namespace std;
int main(){
    int i;
    int j;

    char a='A';
    for(i = 5; i>=1; i--){
        for(j=1; j<=i; j++){
            cout<<" "<<a<<" ";
            a++;
        }
        cout<<"\n";
    
    }
}