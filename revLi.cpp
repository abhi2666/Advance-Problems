//reverse linked list
#include <iostream>
#include <vector>
using namespace std;

class node
{
    public:
    int data;
    node* next;

};

node* reverseList(node *head)
{
    node* prev = NULL;
    node* current = head;
    node* nex = head;

    while(current)
    {
        nex = current->next;
        current->next = prev;
        prev = current;
        current = nex;

    }
    head = prev;
    return head;
}

int main()
{

    node* head = NULL;
    node* first = NULL;
    node* second = NULL;

    head = new node();
    first = new node();
    second = new node();

    //entering data
    head->data = 1;
    head->next = first;
    first->data = 2;
    first->next = second;
    second->data = 3;
    second->next = NULL;

    // node* p = new node(); //to print the list
    // p = head;
    // while(p)
    // {
    //     cout<<p->data<<" ";
    //     p = p->next;
    // }
    
    //reverse the list
    node* l1 = reverseList(head);
    while(l1)
    {
        cout<<l1->data<<" ";
        l1 = l1->next;
    }
    
    return 0;
}