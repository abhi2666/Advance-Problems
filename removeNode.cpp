class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //remove nth node from the back of the linked list
        ListNode* l1 = head;
        ListNode* l2 = head;

        while(n > 0)
        {
            l1 = l1->next;
            n--;
        }
        
        while(l1->next != NULL)
        {
            l1 = l1->next;
            l2 = l2->next;
        }
        //remove the element
        l2->next = l2->next->next;
        return head;
    }
};