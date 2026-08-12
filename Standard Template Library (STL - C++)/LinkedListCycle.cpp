#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x = 0) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    Solution obj;

    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    if (n == 0) {
        cout << "Cycle Exists: False" << endl;
        return 0;
    }

    // Create head
    ListNode* head = new ListNode(1);
    ListNode* current = head;

    // Create remaining nodes
    for (int i = 2; i <= n; i++) {
        current->next = new ListNode(i);
        current = current->next;
    }

    current->next = head; // Create a cycle for testing

    bool cycleExists = obj.hasCycle(head);
    cout << "Cycle Exists: " << (cycleExists ? "True" : "False") << endl;

    return 0;
}
