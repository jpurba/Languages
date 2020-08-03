#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    char ch;
    int integerInput;
    vector<int> v;

    cout << str << endl;
    stringstream is(str);

    while (is >> integerInput)
    {
        v.push_back(integerInput);
        is >> ch;
    }
    
    return v;
}

int main() {
    string str = "23,4,56";
    //cin >> str;

    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}