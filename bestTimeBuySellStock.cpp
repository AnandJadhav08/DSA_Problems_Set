#include<iostream>
#include<vector>
using namespace std;

class Solution {
   public: 
       int bestTimeToBuyAndSellStock(vector<int>& prices) {
           int maxProfic = 0 ;
           int bestBuy = prices[0];
            for(int i = 0; i < prices.size(); i++) {
                if(prices[i] > bestBuy) {
                    maxProfic = max(maxProfic, prices[i] - bestBuy);
                }
                bestBuy = min(bestBuy, prices[i]);
            }        

            cout<< "Maximum Profic Of Stock Selling Is :"<< maxProfic <<endl;
           return maxProfic;

           }
};

int main() {
    Solution obj;
    vector<int> prices;
    int n;
    cout<< "Enter How Many Price You Enter : "<<endl;
    cin>>n;

    cout << "Enter stock prices separated by spaces : ";
   for (int i = 0; i < n; i++)
    {
        int price;
        cin >> price;
        prices.push_back(price);
    }

    int ans =  obj.bestTimeToBuyAndSellStock(prices);
    cout<< "Maximum Profic Of Stock :"<< ans <<endl;
    return 0;
}

/* 
LeetCode Problem 121 | Best Time To Buy and Sell Stock 

input : [7,1,3,5,6,4]
output : 5
*/