#include<bits/stdc++.h>
using namespace std;

// Note: the shorter the index for reach epoch compare to epoch itself
//       the better the prediction

bool custom_sort(double a, double b)
{
    double a1 = abs(a-0);
    double b1 = abs(b-0);
    return a1 < b1;
}

int main ()
{
    /* Init phase */
    double x[] = {3,2,3,4,4,2,5,4,3,5}; // x values
    double y[] = {2,3,4,2,5,4,5,4,3,2}; // y values
    vector<double>error;      // store all error values
    double devi;
    double b0 = 0;            // init b0
    double b1 = 0;            // init b1
    double learnRate = 0.01;  // init error rate

    /* Training phase */
    // Since there are five values and four epochs are needed, run a for loop 20 times.
    for (int i = 0; i<40; i++) {  
        int index = i % 5;             // This access the index after each epoch
        double p = b0 + b1 * x[index]; // calculating prediction
        devi = p - y[index];           // calculating error
        b0 = b0 - learnRate * devi;    // updating b0
        b1 = b1 - learnRate * devi * x[index];    // updating b1
        cout<<"i = "<< i << " ; index = " << index << " ; x[" << index << "]= " << x[index];
        cout<<" ; y[" << index << "]= " << y[index];
        cout<< " ; B0 = "<<b0<<" "<<"; B1 = "<<b1<<" "<<"; error = "<<devi<<endl; // printing values after every update
        error.push_back(devi);
    }

    int l =1;
    cout << "Error before sorting: " << endl;
    for(auto j = error.begin(); j != error.end();++j) 
        cout << "error[ " << l++ << " ] = " << *j << endl;

    sort(error.begin(),error.end(),custom_sort); // error values used to sort the data
    
    l =1;
    cout << "\nError after sorting: " << endl;
    for(auto j = error.begin(); j != error.end();++j) 
        cout << "error[ " << l++ << " ] = " << *j << endl;

    cout<<"\nOptimal end values are: "<<"B0 = "<<b0<<" "<<" B1 = "<<b1<<" "<<" and the smallest error = "<<error[0]<<endl;

    /*Testing Phase*/
    cout<<"\nEnter a test x value: ";
    double test;
    cin>>test;
    double pred=b0+b1*test;
    cout<<endl;
    cout<<"The value predicted by the model= "<<pred<<endl;

} 
