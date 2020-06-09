#include <iostream>
using namespace std;
int main()
{

int number1 = 400;
short int number2 = 500;
unsigned short int number3 = 600;
long int number4 = 700;
unsigned long int number5 = 800;
unsigned long long int number6 = 900;
char character1 ='A';
signed char character2 ='B';
unsigned char character3 ='C';
float digit1 =20.00;
double digit2 = 3.14159;
long double digit3 = 1.414213;
string word = "DataFlair";// 9 characters
bool flag = 0;

//Print statements to show the size of various data types
cout<<"The size of int data type "<< number1 << " is: " << sizeof(number1) << " bytes."<<endl;
cout<<"The size of short int data type "<< number2 << " is: " << sizeof(number2) << " bytes."<<endl;
cout<<"The size of unsigned short data type "<< number3 << " is: " << sizeof(number3) << " bytes."<<endl;
cout<<"The size of long int data type "<< number4 << " is: " << sizeof(number4) << " bytes."<<endl;
cout<<"The size of unsigned long int data type "<< number5 << " is: " << sizeof(number5) << " bytes."<<endl;
cout<<"The size of long long int data type "<< number6 << " is: " << sizeof(number6) << " bytes."<<endl;
cout<<"The size of char data type "<< character1 << " is: " << sizeof(character1) << " bytes."<<endl;
cout<<"The size of signed char data type "<< character2 << " is: " << sizeof(character2) << " bytes."<<endl;
cout<<"The size of unsigned char data type "<< character3 << " is: " << sizeof(character3) << " bytes."<<endl;
cout<<"The size of float data type "<< digit1 << " is: " << sizeof(digit1) << " bytes."<<endl;
cout<<"The size of double data type "<< digit2 << " is: " << sizeof(digit2) << " bytes."<<endl;
cout<<"The size of long double data type "<< digit3 << " is: " << sizeof(digit3) << " bytes."<<endl;
cout<<"The size of string data type "<< word << " is: " << sizeof(word) << "bytes. "<<endl;
cout<<"The size of bool data type "<< word << " is: " << sizeof(word) << "bytes. "<<endl;
return 0;
}
