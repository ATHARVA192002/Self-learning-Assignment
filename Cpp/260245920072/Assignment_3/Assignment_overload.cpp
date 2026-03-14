#include <iostream>
using namespace std;

void area(int side){
    cout<<"Area of square:"<<side*side<<"\n";
}
void area(int length, int breadth){
        cout<<"Area of Rectangle :"<<length*breadth<<"\n";
}
int main(){
    area(4);
    area(4,5);
}