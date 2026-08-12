#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

class Solution {
     public: 
             vector<vector<int>> threeSum(vector<int> &nums) {
             int n = nums.size();
             vector<vector<int>> ans;

             sort(nums.begin(), nums.end());

             for(int i=0; i<n; i++) {
               if(i>0 && nums[i] == nums[i-1]) {
                 continue;
               }
               int j = i+1; int k = n-1;
               
               while(j < k) {

                int sum = nums[i] + nums[j] + nums[k];
                if(sum < 0) {
                    j++;
                } else if(sum > 0) {
                    k--;
                } else {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    while(j < k && nums[j] == nums[j-1]) {
                        j++;
                    }
                    while(j < k && nums[j] == nums[j-1]) {
                        j++;
                    }
                }
               }
             }
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