// templateEx1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

template<typename D, typename B>
class IsDerivedFromHelper {
    class No { };
    class Yes { No no[3]; };

    static Yes Test(B*);
    static No  Test(D*);

public:
    enum { Is = sizeof(Test(static_cast<D*>(0))) == sizeof(Yes) };
};

template <class t, class P>
bool IsDerivedFrom() {
    return IsDerivedFromHelper< C, P>::Is;
}

int main()
{
    std::cout << "Hello World!\n";
}

