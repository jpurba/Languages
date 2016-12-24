/* Purpose: This code to show very simple example of how base class call
 *          method in derived class by using abstract class
 * To build: g++ -o baseDerived_Main.o baseDerived_Main.cpp
 *           in linux environment. 
 */
#include <iostream>

using namespace std;

class Base
{
    public:
           Base() { cout <<"Base::Constructor; \n";}           
           ~Base() { cout <<"Base::Destructor; \n";}

           void Execute()
           {
                cout<<"Base::Execute; \n"; 
                BaseDone(23);  // call base class method
                DoDone(25);    // call derived class method
           }

    private:
            void BaseDone(int value) { cout<<"Base::BaseDone; value = "<<value<<"\n";}
            virtual void DoDone(int) = 0; // pure virtual function, derived class must implement


};

class Derived : Base
{
    public:
           Derived() { cout <<"Derived::Constructor; \n";}
           ~Derived() { cout <<"Derived::Destructor; \n";}
           void Run() { cout <<"Derived::Run; \n"; Execute();}

    private:
           void DoDone(int value) { cout <<"Derived::DoDone; value = "<< value <<"\n";}       
};

int main ()
{

    Derived derived;

    derived.Run();

    return 0;
}
