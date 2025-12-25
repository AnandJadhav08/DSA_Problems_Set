#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    bool findDuplicates(vector<int> &nums) {
        unordered_set<int> seen;
    for (int val : nums) {
        if (seen.count(val)) {
            return true; // Duplicate found
        }
        seen.insert(val);
    }
    return false; // No duplicates found
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