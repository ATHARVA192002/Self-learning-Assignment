#include<iostream>
using namespace std;

void swap1(int* n1, int* n2){
	int temp;
	temp=*n1;
	*n1=*n2;
	*n2=temp;
}

int main(){
	int num1 , num2;
	cout<<"enter two numbers: \n"<<endl;
	cin>>num1>>num2;
	
	cout<<"Before swapping: "<<num1<<" "<<num2<<endl;
	swap1(&num1,&num2);
	cout<<"After swapping: "<<num1<<" "<<num2;
	return 0;
}
