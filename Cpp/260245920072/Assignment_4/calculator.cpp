#include<iostream>
using namespace std;

class Calculator
{
	char *ptr;
	int len;
	
	public:
	
	Calculator()
	{
		cout<<"Enter len :";
		cin>>len;
		ptr = new char [len];
		cout<<"Enter ptr:";
		cin>>ptr;
	}
	
	void display()
	{
		cout<<ptr;
		}	
};

int main()
{
	Calculator c1;
	
	c1.display();
   
} 

 
