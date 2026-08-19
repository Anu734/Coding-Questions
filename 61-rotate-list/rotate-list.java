class Solution {
    public int length(ListNode head){
        int length = 0;
        ListNode temp = head;

        while(temp != null){
            temp = temp.next;
            length++;
        }

        return length;
    }

    public ListNode rotateRight(ListNode head, int k) {

        if(head == null || head.next == null)
            return head;

        int n = length(head);
        k = k % n;

        if(k == 0)
            return head;

        ListNode slow = head;
        ListNode fast = head;

        // Move fast k nodes ahead
        for(int i = 0; i < k; i++){
            fast = fast.next;
        }

        // Find the node before the new head
        while(fast.next != null){
            slow = slow.next;
            fast = fast.next;
        }

        // New head
        ListNode a = slow.next;

        // Break the list
        slow.next = null;

        // Connect old tail to old head
        fast.next = head;

        return a;
    }
}