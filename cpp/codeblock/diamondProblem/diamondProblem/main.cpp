#include <iostream>

using namespace std;

class Person {
   // Data members of person
public:
    Person() { cout << "Person::Person() called \n\n"; }
    Person(int x)  { cout << "Person::Person(int ) called\n" << endl;   }
};

class Faculty : virtual public Person {
   // data members of Faculty
public:
    Faculty(int x):Person(x)   {
       cout<<"Faculty::Faculty(int ) called\n"<< endl;
    }
};

class Student : virtual public Person {
   // data members of Student
public:
    Student(int x):Person(x) {
        cout<<"Student::Student(int ) called\n"<< endl;
    }
};

class TA : public Faculty, public Student  {
public:
    TA(int x):Student(x), Faculty(x)   {
        cout<<"TA::TA(int ) called\n"<< endl;
    }
};


int main()
{
    TA ta1(30);
    cout << "Hello world!" << endl;
    return 0;
}
