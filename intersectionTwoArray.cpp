#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

class Solution {
     public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(), nums1.end());  // s1 will store unique elements from nums1
        unordered_set<int> s2(nums2.begin(), nums2.end()); // s2 will store unique elements from nums2
        vector<int> result;
        for (int num : s1) {
            if (s2.find(num) != s2.end()) {
                result.push_back(num);
            }
        }
        return result;
    
    }
};
   

int main() {
  Solution obj;
  vector<int> nums1;
  vector<int> nums2; 

  cout << "Enter size of first array: ";
    int n1;
    cin >> n1;
    cout << "Enter elements of first array: ";
    for (int i = 0; i < n1; i++) {
        int element;
        cin >> element;
        nums1.push_back(element);
    }

  cout << "Enter size of second array: ";
    int n2;
    cin >> n2;
    cout << "Enter elements of second array: ";
    for (int i = 0; i < n2; i++) {
        int element;
        cin >> element;
        nums2.push_back(element);
    }

     vector<int> result = obj.intersection(nums1, nums2);
     for (int val : result) {
         cout << val << " ";
     }
  return 0;
}

/* LeetCode Problem 349. Intersection of Two Arrays

Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

 

Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]
Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [9,4]
Explanation: [4,9] is also accepted.
 

Constraints:

1 <= nums1.length, nums2.length <= 1000
0 <= nums1[i], nums2[i] <= 1000 */