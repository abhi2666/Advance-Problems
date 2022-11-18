/*
Delete the node from the linked list.
You will not be given access to the head of the list instead, 
you will be given access to the node to be deleted directly. 
It is guaranteed that the node to be deleted is not a tail node
in the list.
*/

class Solution {
public:
    void deleteNode(ListNode* node) {
        //copy the value of the node next to the current node
        node->val = node->next->val;
        node->next = node->next->next;
    }
};