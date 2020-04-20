// template_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
template<typename T>
void f(T s)
{
	cout << s << '\n';
}

template<class T>
inline T square(T x)
{
	T result;
	result = x * x;
	return result;
}

// template specialization
template<>
string square<string>(string ss)
{
	return (ss + ss);
}

template <typename T>T Max(T x, T y)
{
	return (x > y) ? x : y;
}

int main()
{
	int i, ii;
	float x, xx, xxx;
	double y, yy, yyy;
	string ww("Josua");
	string w,www;
	int max1, max2;

	// for integer
	i = 2;
	ii = square<int>(i);
	cout << "Square integer " << i << " is " << ii << endl;

	// for floar
	x = 2.2;
	xx = square<float>(x);
	cout << "Square float " << x << " is " << xx << endl;

	// for double
	y = 3.3;
	yy = square<double>(y);
	cout << "Square double " << y << " is " << yy << endl;

	// for string
	www = square<string>(ww);
	cout << "String: " << ww << "; square is " << www << endl;

	cout << endl;

	// using template on f
	f<int>(i);   // integer
	f<float>(x); // float
	f<double>(y);// double
	f<>('j');    // char
	f(7);        // integer

	// Max using integer
	max1 = 15;
	max2 = 11;

	i = Max(max1, max2);
	cout << "\nMax(15,11) = " << i << endl;

	i = Max(max2, max1);
	cout << "Max(11,15) = " << i << endl;

	// Max using float
	x = 5.5;
	xx = 7.5;
	xxx = Max(x, xx);
	cout << "Max(5.5,7.5) = " << xxx << endl;

	// Max using double
	y = 31.3;
	yy = 31.25;
	yyy = Max(y, yy);
	cout << "Max(31.3,31.25) = " << yyy << endl;


	// for string
	cout << "Max('k','s') = " << Max('k', 's') << endl;
	cout << "Max('C','a') = " << Max('C', 'a') << endl;

	return 0;
}

