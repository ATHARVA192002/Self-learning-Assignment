#include <iostream>
using namespace std;
void sum(int=10,int=20);
int main(){   
    sum();
    sum(100);
    sum(100,200);
}

void sum(int a,int b){
        cout<<"Sum :"<<a+b<<"\n";
}