// closestCoin.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

// 2D map game with grid
/*
* distance( (2,1) => (1,3)-> 3(1 left + 2 down)
-------------------------
! . ! x ! . ! . ! . ! . !
! . ! . ! . ! o ! . ! . !
! o ! . ! . ! . ! . ! . !
! . ! . ! . ! . ! . ! . !
! . ! . ! . ! . ! o ! . !
! . ! . ! . ! . ! . ! . !
*/

class Point {
public:
    int x, y;
    Point() {
        x = 0;
        y = 0;
    }
    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }
};


Point ClosestCoin(Point yourPosition, vector<Point> coinPositions) {

    Point result;
    int shorTestIndex = -1;
    int shortestPath = -1;

    for (unsigned int i = 0; i < coinPositions.size(); i++) {
        Point p = coinPositions[i];
        
        int xDistance = abs(yourPosition.x - p.x);
        int yDistance = abs(yourPosition.y - p.y);
        int totalDistance = xDistance + yDistance;
        if (shortestPath == -1 || totalDistance < shortestPath) {
            shortestPath = totalDistance;
            shorTestIndex = i;
        }
    }


    // fill in correct values
    result.x = coinPositions[shorTestIndex].x;
    result.y = coinPositions[shorTestIndex].y;

    return result;
}

int main()
{

    vector<vector<int>> vect
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (vector<int> vect1D : vect) {
        for (int x : vect1D) {
            cout << x << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;
    vector<Point> coinPositions;
    coinPositions.push_back(Point(3, 3));
    coinPositions.push_back(Point(5, 5));
    Point result = ClosestCoin(Point(1, 1), coinPositions);

    cout << "total distance = ";
    cout << result.x << " " << result.y << endl;
    
}
