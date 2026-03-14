#include <iostream>
using namespace std;
class Employee
{
    int empId;
    string name;
    int salary;
    static int totalEmployees;
    
    public:
    Employee(int e,string n,int s)
    {
        empId = e;
        name = n;
        salary = s;
        
        totalEmployees++;
    }
    
    void display(){
        string companyName="Google\n";
        cout<<"Employee ID: "<<empId<<" "<<",Name: "<<name<<" "<<",Salary: "<<salary<<",Company: "<<companyName<<"Total emplyees: "<<totalEmployees<<"\n";
    }
    
    static void showTotalEmployees(){
        cout<<"Total employees: "<<totalEmployees<<"\n";
    }
};
char companyName;
int Employee::totalEmployees;
int main()
{
    Employee em1(01,"abc",11111);
    em1.display();
    Employee em2(02,"def",22222);
    em2.display();
    Employee em3(03,"ghi",33333);
    em3.display();
    Employee em4(04,"lmn",44444);
    em4.display();
    Employee em5(05,"opq",55555);
    em5.display();
    Employee::showTotalEmployees();
}