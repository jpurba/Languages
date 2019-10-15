#include <iostream>

using namespace std;

class Person
{
public:
    void introduce(){cout<<"Hallo from Person \n"<<endl;}
    virtual void intro() {cout<<"I'm from Person class \n"<<endl;}

};
class Student : public Person
{
public:
    void introduce(){cout<<"Hallo from Student \n"<<endl;}
    void intro() {cout<<"I'm from Student class \n"<<endl; }
};

class Student87 : public Student
{
public:
    void introduce(){cout<<"Hallo from Student87 \n"<<endl;}
    void intro() {cout<<"I'm from Student87 class \n"<<endl; }
};

class Farmer : public Person
{
public:
    void introduce(){cout<<"Hallo from Farmer \n"<<endl;}
    void intro() {cout<<"I'm from Farmer class \n"<<endl; }
};

class FarmerSD : public Farmer
{
public:
    void introduce(){cout<<"Hallo from FarmerSD \n"<<endl;}
    void intro() {cout<<"I'm from FarmerSD class \n"<<endl; }
};

void whoThis(Person &p)
{
    p.introduce();
    p.intro();
}

int main()
{
    Student Josua;
    Student87 Ida;
    Farmer   Dave;
    FarmerSD John;

    cout<<"Ida Student87 Called "<<endl;
    whoThis(Ida);

    cout<<"Josua Student Called "<<endl;
    whoThis(Josua);
    
    cout<<"John FarmerSD Called "<<endl;
    whoThis(John);

    cout<<"Dave Farmer Called "<<endl;
    whoThis(Dave);

    Person   *Obj;
    Student   Obj1;
    Student87 Obj2;

    cout<<"Use object with pointer to 2nd derived class "<<endl;
    Obj = &Obj2;    // point to 2nd derived class
    Obj->introduce();
    Obj->intro();

    cout<<"Use object with pointer to 1st derived class "<<endl;
    Obj = &Obj1;    // point to 2nd derived class
    Obj->introduce();
    Obj->intro();


    cout << "Hello world!" << endl;
    return 0;
}
