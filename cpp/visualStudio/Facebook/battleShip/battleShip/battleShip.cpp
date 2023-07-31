// battleShip.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

double countBattleShips(vector<vector<char>>& board) {

    int rows = board.size();
    int cols = board[0].size();
    int total = rows * cols;

    cout << "\nrows = " << rows << " ; cols = " << cols << endl;

    int ans = 0;
    double result;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {

            if (i == 0 && j == 0) {

                if (board[i][j] != 'X') {
                    cout << "and: i=" << i << " ; j=" << j << endl;
                    continue;
                }
                    
            }
            else if (i == 0) {
                
                if (board[i][j - 1] == 'X') {
                    cout << "i=0: i=" << i << " ; j=" << j << endl;
                    continue;
                }
            }
            else if (j == 0) {
                if (board[i - 1][j] == 'X') {
                    cout << "j=0: i=" << i << " ; j=" << j << endl;
                    continue;
                }
                    
            }
            else {
                if (board[i - 1][j] == 'X' || board[i][j - 1] == 'X') {
                    cout << "or: i=" << i << " ; j=" << j << endl;
                    continue;
                }
            }
            if (board[i][j] == 'X') {
                cout << "ans++ : i=" << i << " ; j=" << j << endl;
                ans++;
            }
                
        }
    }

    cout << "answer of battle ship: " << ans << endl;
    result = (double)ans / (double)total;
    return result;
}


double battleShipsCount(vector<vector<char>>& board) {

    int rows = board.size();
    int cols = board[0].size();
    int total = rows * cols;

    cout << "\nrows = " << rows << " ; cols = " << cols << endl;

    int ans = 0;
    double result;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (board[i][j] == 'X') {
                cout << "and: i=" << i << " ; j=" << j << endl;
                ans++;
            }
        }
    }

    cout << "answer of battle ship: " << ans << endl;
    result = (double)ans / (double)total;
    return result;
}

void twoDimVecExample(void) {
    vector<vector<int>> vect{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "num rows = "<<vect.size()<<" ; num col = "<<vect[0].size()<<endl;


    for (int i = 0; i < vect.size(); i++) {
        for (int j = 0; j < vect[i].size(); j++) {
            cout << vect[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    double result;
    vector<vector<char>> vect{
        {'0', '0', 'X'},
        {'X', '0', 'X'}
    };

    twoDimVecExample();

    result = countBattleShips(vect);

    cout << "\ncountBattleShips result = " << result << endl;

    result = 0.0;
    vector<vector<char>> vect1{
        {'0', 'X', 'X'},
        {'X', '0', 'X'},
        {'X', '0', 'X'},
        {'X', 'X', 'X'}
    };

    result = battleShipsCount(vect1);

    cout << "\ncountBattleShips result = " << result << endl;
}

