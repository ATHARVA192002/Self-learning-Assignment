#include <iostream>
using namespace std;
class Count
{
	
	int count;

	
	public:
		
		void find() {
			
			long long arr;	
			cin>>arr;
			
			long long temp=arr;

			
			while(temp!=0)
			{
				temp = temp/10;
				count++;
			}
			
			cout<<arr;
		}
		
		void display(){
			cout<<count;
		}
};
int main(){
	
	

	Count c1;
	c1.find();
	c1.display();
	
}
