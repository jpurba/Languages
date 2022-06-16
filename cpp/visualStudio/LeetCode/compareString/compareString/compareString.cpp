// compareString.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool backspaceCompare(string S, string T) {
        // To track the last placed index for S
        int Se = 0;
        for (int i = 0; i < S.length(); i++) {
            // if it is a #
            if (S[i] == '#') {
                //Then decrement the last placed index for S
                if (Se > 0)
                    Se--;
            }
            else {
                // else, place it on the last placed index for S
                S[Se] = S[i];
                // increment the last placed index for S
                Se++;
            }
        }
        // To track the last placed index for T
        int Te = 0;
        for (int i = 0; i < T.length(); i++) {
            // if it is a #
            if (T[i] == '#') {
                //Then decrement the last placed index for T
                if (Te > 0)
                    Te--;
            }
            else {
                // else, place it on the last placed index for S
                T[Te] = T[i];
                // increment the last placed index for S
                Te++;
            }
        }

        // check if the new length is same or not
        if (Se != Te)
            return false;
        // check if each character is same or not, till new length
        for (int i = 0; i < Se; i++) {
            if (S[i] != T[i])
                return false;
        }
        return true;
    }
};


int main()
{
    Solution sln;
    string s = "ab#c";
    string t = "ad#c";
    bool response;
    string answer;
    
    response = sln.backspaceCompare(s, t);
    if (response == 1)
        answer = "True";
    else
        answer = "False";

    cout << "Response = " << answer << endl;

    s = "ab##";
    t = "c#d#";
    response = sln.backspaceCompare(s, t);
    if (response == 1)
        answer = "True";
    else
        answer = "False";

    cout << "\nResponse = " << answer << endl;

    s = "a#c";
    t = "b";
    response = sln.backspaceCompare(s, t);
    if (response == 1)
        answer = "True";
    else
        answer = "False";

    cout << "\nResponse = " << answer << endl;

    cout << "Hello World!\n";
}

