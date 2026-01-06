import java.util.*;

// Definition for singly-linked list.
class ListNode {
    int val;
    ListNode next;

    ListNode(int val) {
        this.val = val;
        this.next = null;
    }
}

public class leetCode19 {
    public ListNode removeNthFormEnd(ListNode head , int n) {
           ListNode dummy = new ListNode(0);
           dummy.next = head;
 
            ListNode fast = dummy;
            ListNode slow = dummy;

            for(int i = 0 ; i <= n ; i++) {
                fast = fast.next;
            }

            while(fast != null) {
                fast = fast.next;
                slow = slow.next;
            }

            slow.next = slow.next.next;

           return dummy.next;
    }

    public static ListNode createList(int size, Scanner sc) {
        if (size == 0) return null;
        System.out.println("Enter node values:");
        ListNode head = new ListNode(sc.nextInt());
        ListNode current = head;
        for (int i = 1; i < size; i++) {
            current.next = new ListNode(sc.nextInt());
            current = current.next;
        }
        return head;
    }

    public static void printList(ListNode head) {
        ListNode current = head;
        while (current != null) {
            System.out.print(current.val + " ");
            current = current.next;
        }
        System.out.println();
    }

    public static void main(String[] arg) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter Number of Nodes:");
        int size = sc.nextInt();

        ListNode head = createList(size, sc);

        System.out.println("Enter Nth:");
        int n = sc.nextInt();

        leetCode19 obj = new leetCode19();
        head = obj.removeNthFormEnd(head, n);

        System.out.println("After Removing Node Nth from End in List:");
        printList(head);

        sc.close();
    }
}
