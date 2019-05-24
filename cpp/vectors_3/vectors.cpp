#include <iostream>
#include <vector>

using namespace std;


int main () {

    // vector(column) inside vector(row)
    vector< vector<int> > grid(3, vector<int>(4, 7)); // row: 3 and column:4
    
    grid[1].push_back(8); // append 8 on the row 2 at the end

    for(int row = 0; row<grid.size(); row++)
    {
        for(int col=0; col<grid[row].size(); col++)
        {
            cout << grid[row][col]<< flush;
        }
        cout << endl;
    }

    return 0;

}
