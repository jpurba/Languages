#include <fstream>
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("data.txt");
    char ch;
    char word[30];
    int countChar = 0;
    int countSpace = 0;
    int countLine = 0;
    int countAlphabet = 0;
    int countWord = 0;
    while(!fin.eof()){
            fin.get(ch);
            cout << ch;
            countChar++;
            if(isblank(ch))
                countSpace++;
            else if(ch=='\n')
                countLine++;
            else
                countAlphabet++;

    }
    //fin.close();
    cout <<"Number of Char: "<< countChar << endl;
    cout <<"Number of space: "<< countSpace << endl;
    cout <<"Number of line: "<< countLine << endl;
    cout <<"Number of alphabet: "<< countAlphabet << endl;

    cout << "Hello world!" << endl;
    fin.close();
    return 0;
}
