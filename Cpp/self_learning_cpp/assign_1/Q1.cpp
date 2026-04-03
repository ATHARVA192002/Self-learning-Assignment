#include <iostream>
using namespace std;
int main(){
	int a=20,b=10;
	cout<<"unary operator:"<<endl;
	cout<<a++<<endl;
	cout<<a--<<endl;
	cout<<&a<<endl;
	cout<<~a<<endl;
	
	cout<<"Logical operator:"<<endl;
	cout<<!a<<endl;
	cout<<(a&&b)<<endl;
	cout<<(a||b)<<endl;
	
	
	cout<<"Ternary operator: ";
	int max = (a>b)?a:b;
	cout<<"max = "<<max<<endl;
	
	
	cout<<"Assignment operator: "<<endl;
	a=b;
	cout<<a<<endl;
	a+=b;
	cout<<a<<endl;
	a-=b;
	cout<<a<<endl;
	a*=b;
	cout<<a<<endl;
	a/=b;
	cout<<a<<endl;
	a%=b;
	cout<<a<<endl;
	
	
}
