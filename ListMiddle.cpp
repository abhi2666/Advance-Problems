// Find middle element in a linked list
#include <iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;

};

int findMiddle(node* head)
{
    // finding the middle element of the list
    //using a slow and a fast pointer
    node* slow = head;
    node* fast = head;
    
    while(fast && fast->next)
    {
        
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow->data;
}

int main()
{
    node* head = new node();
    node* first = new node();
    node* second = new node();
    node* third = new node();

    head->data = 0;
    head->next = first;
    first->data = 1;
    first->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;


    int middleEle = findMiddle(head);
    cout<<middleEle<<endl;
    
    return 0;
}