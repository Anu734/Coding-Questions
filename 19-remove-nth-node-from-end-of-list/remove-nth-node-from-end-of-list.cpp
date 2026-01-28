class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* temp = head;

        // Count total nodes
        while (temp) {
            count++;
            temp = temp->next;
        }

        int pos = count - n;  // position from start (0-based)

        // If head needs to be removed
        if (pos == 0) {
            temp = head;
            head = head->next;
            delete temp;
            return head;   
        }

        ListNode* curr = head;
        ListNode* prev = NULL;

        while (pos--) {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
        delete curr;

        return head;
    }
};
