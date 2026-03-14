#include<iostream>
using namespace std;

void swapN(int &a, int &b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}

int main(){
	int a,b;
	cout<<"enter numbers: "<<endl;
	cin>>a>>b;
	
	swapN(a,b);
	
	cout<<"After swap: "<<a<<" "<<b;
}
