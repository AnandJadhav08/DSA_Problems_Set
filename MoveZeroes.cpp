#include <iostream>
#include <vector>
using namespace std;

class moveZeroes
{
public:
    void movesZeroes(vector<int> &nums)
    {
        int lastNonZeroFoundAt = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                swap(nums[lastNonZeroFoundAt], nums[i]);
                lastNonZeroFoundAt++;
            }
        }
    }
};

int main()
{
    moveZeroes obj;

    vector<int> nums = {0, 1, 0, 3, 12};

    cout << "Original Array : ";
    for (int n : nums)
    {
        cout << n << " ";
    }

    obj.movesZeroes(nums);

    cout << "\n Array after moving zeroes to end : ";
    for (int n : nums)
    {
        cout << n << " ";
    }

    return 0;
}

/*
283. Move Zeroes

Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
Note that you must do this in-place without making a copy of the array.

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0] */