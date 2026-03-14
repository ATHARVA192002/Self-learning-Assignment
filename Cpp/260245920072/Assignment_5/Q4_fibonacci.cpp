#include <iostream>
using namespace std;
int main(){
	int n;
	int n1 =0;
	int n2=1;
	
	cout<<"Enter number for fibonacci series :"<<endl;
	cin>>n;
	int sum=0;
	cout<<n1<<n2;
	for(int i=1;i<=n;i++){
		sum = n1+n2;
		n1=n2;
		n2=sum;
		
		
		cout<<sum;
		
	}
	
}
