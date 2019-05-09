#include <iostream>
#include <vector>

using namespace std;


int main () {


    vector<double> numbers(0);
    vector<double> num(0);
    int capacity = numbers.capacity();

    cout <<"Size: " << numbers.size() << endl;
    cout << "Capacity: " << capacity << endl;

    for(int i=0;i<10000;i++)
    {
         if(numbers.capacity() != capacity) {
             capacity = numbers.capacity();
             cout << "Capacity: " << capacity << endl;
             
         }
         numbers.push_back(i);
    }

    
    numbers.clear();  // clear the content of the vectors
    cout <<"Size: " << numbers.size() << endl;
    cout << "Capacity: " << capacity << endl;

    numbers.resize(100);  // resize the vector to 100
    cout << numbers[2] << endl;
    cout <<"ReSize: " << numbers.size() << endl;
    cout << "Capacity: " << capacity << endl;

    num.reserve(1000);  // reserve the vector to 1000, change capacity
    cout << num[2] << endl;
    cout <<"num Size: " << num.size() << endl;
    cout << "num Capacity: " << num.capacity() << endl;

    return 0;

}
