// RomanNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int romanToInt(string S) {
        int ans = 0;
        int num = 0;
        
        cout << "romanToInt, S: " << S << "; S size: " << S.size() << endl;
        cout << "S[i] = " << S[0] << endl;
        for (int i = 0; i< S.size(); i++) {
            cout << " i = " << i << endl;
            switch (S[i]) {
            case 'I': num =   1; break;
            case 'V': num =   5; break;
            case 'X': num =  10; break;
            case 'L': num =  50; break;
            case 'C': num = 100; break;
            case 'D': num = 500; break;
            case 'M': num = 1000; cout << "num: " << num << endl; break;
            }
            
            if (4 * num < ans)
                ans -= num;
            else
                ans += num;
                
        }
        return ans;

    }

};

int main()
{
    Solution solution;
    
    int number;
    number = solution.romanToInt("M");

    cout << "\nsolution number : " << number  << endl;

    cout << "Hello World!\n";
}

