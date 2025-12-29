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
                     
                 set<vector<int>> s;

                 for(int i = 0 ; i < n; i++) {
                    for(int j = i + 1 ; j < n ; j++) {
                        for(int k = j + 1 ; k < n ; k++ ) {
                            if(nums[i] + nums[j] + nums[k] == 0) {
                                vector<int> trip = {nums[i], nums[j], nums[k]};
                                sort(trip.begin(), trip.end());

                            if(s.find(trip) == s.end()) {
                                s.insert(trip);
                                ans.push_back(trip);
                            }
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