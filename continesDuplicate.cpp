#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
class Solution
{
public:
    bool findDuplicates(vector<int> &nums)
    {
        unordered_set<int> s;
        for (int i = 0; i < nums.size(); i++)
        {
            if (s.find(nums[i]) != s.end())
            {
                return true;
            }
            s.insert(nums[i]);
        }
        return false;
    }
};

int main()
{
    Solution obj;

    vector<int> nums;
    ;
    cout << "Enter number of elements in the array: ";
    int n;
    cin >> n;
    cout << "Enter the elements of the array:";
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        nums.push_back(val);
    }

    if (obj.findDuplicates(nums))
    {
        cout << "The array contains duplicates." << endl;
    }
    else
    {
        cout << "The array does not contain duplicates." << endl;
    }

    return 0;
}





/* 
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

Example 1:

Input: nums = [1,2,3,1]

Output: true

Explanation:

The element 1 occurs at the indices 0 and 3.

Example 2:

Input: nums = [1,2,3,4]

Output: false

Explanation:

All elements are distinct.

Example 3:

Input: nums = [1,1,1,3,3,4,3,2,4,2]

Output: true */