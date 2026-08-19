class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        ListNode i = null;
        ListNode j = head;

        while (j != null) {

            if (j.next != null && j.val == j.next.val) {
                int value = j.val;

                while (j != null && j.val == value) {
                    j = j.next;
                }

                if (i == null) {
                    head = j;
                } else {
                    i.next = j;
                }

            } else {
                i = j;
                j = j.next;
            }
        }

        return head;
    }
}