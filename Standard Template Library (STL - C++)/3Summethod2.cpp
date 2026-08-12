#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

class Solution {
     public: 
             vector<vector<int>> threeSum(vector<int> &nums) {
                 int n = nums.size();
                     
                 set<vector<int>> uniqueTriplets;

                    for(int i=0; i<n; i++) {  // i is first element
                           int tar = -nums[i];
                           set<int> s;

                           for(int j=i+1; j<n; j++) {   // j is second element 
                                int third = tar - nums[j]; 

                                if(s.find(third) != s.end()) {
                                    vector<int> triplet = {nums[i], nums[j], third};
                                    sort(triplet.begin(), triplet.end());
                                    uniqueTriplets.insert(triplet);

                                }
                                s.insert(nums[j]);
                           }
                    }
                    vector<vector<int>> ans(uniqueTriplets.begin(), uniqueTriplets.end());
                    return ans;
                }
};

int main() {
    Solution obj;
    vector<int> nums;
    int n ;
    cout<<"Enter size of array:"<<endl;
    cin>>n;
    cout<<"Enter number of elements:"<<endl;
    for(int i=0; i<n; i++){
        int element;
        cin>>element;
        nums.push_back(element);
    }

     vector<vector<int>> result = obj.threeSum(nums);
     cout<<"The triplets are:"<<endl;
     for(auto& triplet : result) {
         cout << triplet[0] << " " << triplet[1] << " " << triplet[2] << endl;
     }
}