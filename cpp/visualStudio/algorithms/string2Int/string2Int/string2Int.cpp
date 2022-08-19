// string2Int.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std; 


/* 
* Find all positions of the a Substring or char in given string
*/
int findAllOccurances(vector<size_t>& vec, string data, string toSearch) {
    int count = 0;
    // Get the first occurrence
    size_t pos = data.find(toSearch);
    
    // Repeat till end is reached
    while (pos != string::npos)
    {
        // Add position to the vector
        vec.push_back(pos);

        // Get the next occurrence from the current position
        pos = data.find(toSearch, pos + toSearch.size());
        count++;
    }
    return count;
}

string getWrongAnswers(int N, string C) {
    string response = "";
    cout << "Input C = " << C << endl;

    for (int i = 0; i < N; i++) {
        if (C[i] == 'A') {
            response = response + 'B';
        }
        else if (C[i] == 'B') {
            response = response + 'A';
        }
    }

    cout << "response = " << response << endl;
    return response;
}



int main()
{
    string s1 = "10";
    string s2 = "20";
    cout << "string s1 = " << s1 << endl;
    cout << "string s2 = " << s2 << endl;
    int i1 = stoi(s1);
    int i2 = stoi(s2);
    int iresult = i1 + i2;
    //char* intChar = itoa(iresult);
    string sresult = to_string(iresult);
    cout << "integer i1 = " << i1 << endl;
    cout << "integer i2 = " << i2 << endl;
    cout << "iresult = " << iresult << endl;
    cout << "sresult = " << sresult << endl;
    int count=0;
    vector<size_t> vec;
    //====

    string s3 = "(((5+2)/2)*3)";
    if (s3.find('(') != string::npos)
    {
        cout << "found the char ( in the string \n";
    }
    else 
    {
        cout << " NOT found the char ( in the string \n";
    }

    for (int idx = 0; idx < s3.length(); idx++) {
        cout << s3[idx] << " ";

    }
    cout << endl;
    count = findAllOccurances(vec, s3, "(");
    cout << "Original string: " << s3 << endl;
    cout << "All index position ( in a given string are \n";
    for (size_t pos : vec)
        cout << pos << " ";

    cout << endl;
    cout << "There are " << count << " char ( in a string \n";

    vec.clear();  // clear the vector

    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";

    count = findAllOccurances(vec, s3, ")");
    cout << "\nOriginal string: " << s3 << endl;
    cout << "All index position )in a given string are \n";
    for (size_t pos : vec)
        cout << pos << " ";

    cout << endl;
    cout << "There are " << count << " char ) in a string \n";

    //====

    //========
    int size=1;
    string resultWord;
    string strWord = "Hello,World";
    cout << strWord << endl;
    int index = 5;
    char replacement = ' ';
    strWord[index] = replacement;
    cout << strWord << endl;
    //cout<<"Enter the string size: ";
    //cin >> size;
    string str = "ABA";
    string res = "ABA";
    //char charRes[];
    for (int i = 0; i < str.length(); i++) {
        cout << str[i] << endl;
        if (str[i] == 'A') {
            cout << "Inside if A; i = " << i << endl;
            str.replace(i,1,"B");
        }            
        else if (str[i] == 'B') {
            cout << "Inside if B; i = " << i << endl;
            str.replace(i, 1, "A");
        }
    }

    cout << "After check" << endl;
    for (int i = 0; i < str.length(); i++) {
        cout << str[i] << endl;
    }

    resultWord = getWrongAnswers(str.length(), str);
    cout << "resultWord = " << resultWord << endl;


    //==============
    //find char in a string
    //==============
    string data = "Hi This is a Sample string, 'iS' is here 3 times";
    
    vec.clear();  // clear the vector

    // Get all occurrences of the 'is' in the vector 'vec'
    count = findAllOccurances(vec, data, "is");

    cout << "\nOriginal string is " << data << endl;
    cout << "All index position of 'is' in given string are: \n"; 
    for (size_t pos : vec)
        cout << pos << " ";

    cout << endl;
    cout << "There are " << count << " string 'is' \n";
}

