#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x = 0) : val(x), next(NULL) {}
};

class Solution {
    public: 
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};

int main() {
Solution obj;
ListNode* head = new ListNode(1);
head->next = new ListNode(2);       
head->next->next = new ListNode(3);
head->next->next->next = new ListNode(4);
head->next->next->next->next = new ListNode(5);
ListNode* middle = obj.middleNode(head);
cout << "Middle Node Value: " << endl;
while(middle != NULL) {
    
    cout << middle->val << endl;
    middle = middle->next;
}
return 0;
}