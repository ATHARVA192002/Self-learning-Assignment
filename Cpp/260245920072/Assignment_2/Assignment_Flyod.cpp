#include <iostream>
using namespace std;
int main(){
    int i;
    int num = 1;
    int j;
    for(i = 0; i<=5; i++){
        for(j=0; j<=i; j++){
            cout<<" "<<num<<" ";
            num++;
        }
        cout<<"\n";
    
    }
}