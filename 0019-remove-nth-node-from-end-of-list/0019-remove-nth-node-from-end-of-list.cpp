/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        // Reverse the list
        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr != NULL)
        {
            ListNode* nextnode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextnode;
        }

        head = prev;

        // Delete nth node from start
        if (n == 1)
        {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }
        else
        {
            curr = head;
            int count = 1;

            while (curr != NULL && count < n - 1)
            {
                curr = curr->next;
                count++;
            }

            if (curr != NULL && curr->next != NULL)
            {
                ListNode* temp = curr->next;
                curr->next = curr->next->next;
                delete temp;
            }
        }

        // Reverse again
        prev = NULL;
        curr = head;

        while (curr != NULL)
        {
            ListNode* nextnode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextnode;
        }

        head = prev;

        return head;
    }
};