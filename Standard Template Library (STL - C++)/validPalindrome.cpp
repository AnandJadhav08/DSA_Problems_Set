#include <iostream>
#include <string>
using namespace std;

class solution {
  public : 
      bool isPalindrome(string s) {
      int left = 0, right = s.length() - 1;

while (left < right) {

    while (left < right && !isalnum(s[left])) left++;
    while (left < right && !isalnum(s[right])) right--;

    if (tolower(s[left]) != tolower(s[right])) {
        return false;
    }

    left++;
    right--;
}

return true;
      }
};

int main() {
    solution obj;
    string line;

    if (obj.isPalindrome(line))
        cout << "It is a palindrome." << endl;
    else
        cout << "It is not a palindrome." << endl;

    return 0;
}




/* 125. Valid Palindrome
Given a string s, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.


Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome. */