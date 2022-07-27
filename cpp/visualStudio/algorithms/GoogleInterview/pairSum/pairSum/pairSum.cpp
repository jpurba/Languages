// pairSum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool HasPairWithSum(const vector<int>& data, int sum) {
    cout << "in HasPairWithSum\n";
    int low = 0;
    int hi = data.size() - 1;
    int s;
    while (low < hi) {
        s = data[low] + data[hi];
        cout << "low = " << low << " ;hi = " << hi << " ;s= " << s << endl;
        if (s == sum)
            return true;
        low++;
    }
    cout << "low = " << low << " ;hi = " << hi << " ;s= " << s << endl;
    return false;
}

bool HasPairSum(const vector<int> data, int sum) {
    unordered_set<int> comp; // complements
    for (int value : data) {
        
        if (comp.find(value) != comp.end()) {
            return true;
        }
        comp.insert(sum - value);
        cout << "value = " << value << endl;
    }
    return false;
}

int main()
{
    vector<int> a = { 1,2,3,9 };
    vector<int> b = { 1,2,4,4 };
    bool results =0 ;
    int sum = 8;

    results = HasPairSum(a, sum);
    cout << "a results = " << results << endl;

    results = HasPairSum(b, sum);
    cout << "b results = " << results << endl;

    results = HasPairWithSum(a, sum);
    cout << "a results = " << results << endl;

    results = HasPairWithSum(b, sum);
    cout << "b results = " << results << endl;

    cout << "Hello World!\n";
}

