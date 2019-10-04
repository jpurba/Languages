#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
    vector<int> v{0,1,3,5,7,9,2,4,6,8};
    bool flasg = true;

    //to test c++ 11 features
    auto a = 42;
    auto b = 42.2;

    cout <<"Use sort with 2 argument begin and end :" << endl;
    std::sort(v.begin(), v.end());
    for (int i: v)
        std::cout << i << " " << endl;

    cout <<"Use sort with 3 argument begin, end and greater :" << endl;
    std::sort(v.begin(), v.end(), std::greater<int>());
    for (int i: v)
        std::cout << i << " " << endl;

    cout <<"Use sort with 3 argument begin, end and alpha (a<b) :" << endl;
    std::sort(v.begin(), v.end(), [](int a, int b)
    {
        return a<b;
    }
    );
    for (int i: v)
        std::cout << i << " " << endl;

    cout <<"Use sort with 3 argument begin, end and alpha (a>b) :" << endl;
    std::sort(v.begin(), v.end(), [](int a, int b)
    {
        return a>b;
    }
    );
    for (int i: v)
        std::cout << i << " " << endl;

    cout << "Hello World " << a << ' ' << b << endl;
}
