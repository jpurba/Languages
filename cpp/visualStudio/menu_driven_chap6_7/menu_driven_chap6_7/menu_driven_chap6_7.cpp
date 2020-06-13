// menu_driven_chap6_7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
using namespace std;
void inter(char str[][6])               //function for interchanging values of column 2 and 5
{
    //cout<<" case1";
    int i;
    char temp;
    for (i = 0; i < 5; i++)
    {
        temp = str[i][1];                   //swapping values
        str[i][1] = str[i][4];
        str[i][4] = temp;
    }
    cout << " Values of column 2 and column 5 are interchanged ";
}
void vow(char str[][6])                   //function for finding number of vowels
{
    int i, j, temp = 0;
    cout << " ";
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (str[i][j] == 'a' || str[i][j] == 'e' || str[i][j] == 'i' || str[i][j] == 'o' || str[i][j] == 'u')   //counting vowels here
            {
                temp++;
            }
        }
    }
    cout << " Number of Vowels : " << temp << endl;
}
void disp(char str[][6])                //function for displaying all values
{
    int i, j;
    cout << " ";
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cout << str[i][j] << " ";
        }
        cout << endl << endl << " ";
    }
}
void srch(char str[][6])           //function for searching a particular character
{
    int i, j, temp = 0;
    char ch1;                       //character to be searched
    cout << " Enter a character to search : ";
    cin >> ch1;
    cout << " ";
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (str[i][j] == ch1)
            {
                temp++;
            }
        }
    }
    cout << "Number of times " << ch1 << " occurs : " << temp << endl;
}
int main()
{
    char str[5][6] = { "sloan","horse","egrit","house","water" }; //6th position is taken for null character
    int choice = 0;
    while (choice != 5)           //exit condition is choice 5
    {
        cout << " MENU";       //menu
        cout << " 1. Interchange column 2 with column 5";
        cout << " 2. Count and display the number of vowels.";
        cout << " 3. Display the array in a matrix (rows and columns)";
        cout << " 4. Search for and display number of instances of any given character";
        cout << " 5. Exit";
        cout << " CHOICE : ";
        cin >> choice;
        switch (choice)
        {
        case 1:   inter(str);       //function call
            break;
        case 2:   vow(str);       //function call
            break;
        case 3:   disp(str);       //function call
            break;
        case 4:    srch(str);       //function call
            break;
        case 5:    cout << " GoodBye ";
            break;
        }
    }
    return 0;
}