#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> freq(26,0);
        
        for(char val : s) {
            freq[val - 'a']++;
        }

        for(int i = 0 ; i < s.size() ; i++) {
             if(freq[s[i] - 'a'] == 1) {
                return i;
             }
        }
        return -1 ;
    }
};

int main() {
    Solution sol;
    std::string s;
    std::cout << "Enter a string: ";
    std::cin >> s;  
    int index = sol.firstUniqChar(s);
    std::cout << "The index of the first unique character is: " << index << std::endl;
    return 0;
}