// sum2Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();

        for (int i = 0; i < len; i++) {

            for (int j = i + 1; j < len; j++) {
                cout << "nums[" << i << "] = " << nums[i] << endl;
                cout << "nums[" << j << "] = " << nums[j] << endl;
                if (nums[i] + nums[j] == target) {
                    return { i,j };
                }
            }
        }
        return { -1,-1 };
    }
};
    
int main()
{
    Solution solution;

    int target = 9;
    vector<int> input = { 2, 7, 11, 15 };
    vector<int> output = {0,0};

    output = solution.twoSum(input, target);

    cout << "\nOutput index : " << endl;
    for (const int& i : output)
        cout << output[i] << " ";



    cout << "Hello World!\n";
}
