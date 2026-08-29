class Solution {
    public ListNode oddEvenList(ListNode head) {

        if (head == null || head.next == null) {
            return head;
        }

        ListNode odd = head;
        ListNode even = head.next;
        ListNode evenHead = even;

        while (even != null && even.next != null) {

            // odd nodes ko connect karo
            odd.next = even.next;
            odd = odd.next;

            // even nodes ko connect karo
            even.next = odd.next;
            even = even.next;
        }

        // odd list ke end me even list attach
        odd.next = evenHead;

        return head;
    }
}