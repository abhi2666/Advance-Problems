
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode *res = new ListNode();
        ListNode *temp = res;
        int sum, carry = 0;
        while(l1 != NULL || l2 != NULL || carry)
        {
            sum  = 0; // this sum%10 will be added to new node every time
            if(l1 != NULL)
            {
                sum += l1->val;
                l1  = l1->next;
            }
            if(l2 != NULL)
            {
                sum += l2->val;
                l2 = l2->next;
            }

            // getting the values to put into dummy array
            sum += carry;
            carry = sum/10;
            ListNode *node = new ListNode(sum % 10); // created a new node
            temp->next = node;
            temp = temp->next;
        }
        return res->next;
    }
};