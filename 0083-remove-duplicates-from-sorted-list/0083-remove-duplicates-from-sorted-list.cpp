class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        if (head == NULL)
            return head;

        ListNode* A = head;
        ListNode* B = head->next;

        while (B)
        {
            if (A->val == B->val)
            {
                A->next = B->next;
                B = A->next;
            }
            else
            {
                A = A->next;
                B = B->next;
            }
        }

        return head;
    }
};