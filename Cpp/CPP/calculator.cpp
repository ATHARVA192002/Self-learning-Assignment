#include<iostream>
using namespace std;

class Calculator
{
	int num1, num2;
	
	public:
	
	void accept()
	{
		cout<<"Enter a number :";
		cin>>num1>>num2;
	}
	
	int add()
	{
		return num1+num2;
	}
	
	int subtract()
	{
		return num1-num2;
	}
	
	int multiply()
	{
		return num1*num2;
	}
	
	int divide()
	{
		return num1/num2;
	}
	int square1()
	{
		return num1*num1;
	}
	int square2()
	{
		return num2*num2;
	}
	
};

int main()
{
   Calculator c1;
   
   c1.accept();
   
   c1.add();
   c1.subtract();
   c1.multiply();
   c1.divide();
   c1.square1();
   c1.square2();
}

