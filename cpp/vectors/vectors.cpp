#include <iostream>
#include <vector>

using namespace std;


int main () {


    vector<string> strings(5);

    // Note: push_back will increase vector size
    strings.push_back("six"); // will append after the last element of original vector
    strings.push_back("seven");
    strings.push_back("eight");

    strings[3] = "dog";

    for(int i=0; i<strings.size(); i++)
    {
        cout << i << " " << strings[i] << endl;
    }
    cout << "Fourth element "<< strings[3] << endl;
    cout << "Vector Size: " << strings.size() << endl;

    strings[0] = "one";
    strings[1] = "two";
    strings[2] = "three";
    strings[3] = "four";
    strings[4] = "five";

    // use iterator
    vector<string>::iterator it = strings.begin();

    cout << "Beginning of array : " << *it << endl;

    it++;
    cout << "Next array element : " << *it << endl;

    for(it = strings.begin(); it<=strings.end(); it++)
    {
        cout << *it << endl;
 
    }
    return 0;

}
