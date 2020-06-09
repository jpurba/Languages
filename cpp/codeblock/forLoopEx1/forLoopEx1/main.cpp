#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.

    int a, b;
    int i;

    cin >> a;
    cin >> b;

    for (i=a; i<=b; i++){
        if(i<10){
            switch (i){
                case 1:
                    cout <<"one"<<endl;
                    break;
                case 2:
                    cout <<"two"<<endl;
                    break;
                case 3:
                    cout <<"three"<<endl;
                    break;
                case 4:
                    cout <<"four"<<endl;
                    break;
                case 5:
                    cout <<"five"<<endl;
                    break;
                case 6:
                    cout <<"six"<<endl;
                    break;
                case 7:
                    cout <<"seven"<<endl;
                    break;
                case 8:
                    cout <<"eight"<<endl;
                    break;
                case 9:
                    cout <<"nine"<<endl;
                    break;
            } // end of switch case
        } // number 1 <= n <= 9
        else{
            if(i%2 == 0){
                cout << "even" << endl;//even number
            }
            else{
                cout << "odd" << endl; // odd number
            }

        } // end of else

    }

    return 0;
}
