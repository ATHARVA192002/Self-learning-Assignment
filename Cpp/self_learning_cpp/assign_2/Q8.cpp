#include <iostream>
using namespace std;

class Person {
public:
    void show() {
        cout << "Person\n";
    }
};

class Student : virtual public Person {};
class Employee : virtual public Person {};

class TeachingAssistant : public Student, public Employee {};

int main() {
    TeachingAssistant ta;
    ta.show();
    return 0;
}
