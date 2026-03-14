#include <iostream>
 using namespace std;
 
 class Student{
 
	int rollNo[1],dob[1],marks[1];
	
	public:
	
	Student()
	{
		cout<<"No Args Constructor:"<<"\n";
	}
	
	Student(int r, int d, int m)
    {
    	{
    		rollNo[0]=r;
    		dob[0]=d;
    		marks[0]=m;
    		
    		cout<<"Parameterized Constructor is called :";
    		cout<<rollNo[0]<<"\n"<<dob[0]<<"\n"<<marks[0];
 		}
 	}
	
	void accept()
	{
		int i;
		
		cout<<"Enter Roll no. , DOB , Marks :";
		
		for(i=0;i<1;i++)
		{
			cin>>rollNo[i]>>dob[i]>>marks[i];
		}
	}
	
	void display()
	{
		for (int j=0;j<1;j++)
		{
			cout<<"Roll no."<<rollNo[j]<<" "<<"DOB :"<<dob[j]<<" "<<"Marks :"<<marks[j]<<endl;
		}
	}
	};
	int main()
	{
		Student s1;
		s1.accept();
		s1.display();
		
		Student(1,20,100);
		
	}
		
	
