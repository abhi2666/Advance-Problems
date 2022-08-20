#include <iostream>
#include <vector>
using namespace std;

class node
{   
    public:
    int data;   
    node* next;

    node(int val)
    {
        data = val;
        next = NULL;
    }

};

void insert_node(node* &head, int val)
{
    //for first node
    node* new_node = new node(val); // new node has been created
    node* temp = head;
    if(head == NULL)
    {
        //means it is pointing towards no node
        head = new_node;
        return;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}

void reverse_list(node* &head)
{
    node* current = head;
    node* prev = NULL;
    node* next = NULL;

    while(current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    // making the last node as the new head
    head = prev;
}

void display(node *root)
{
    while(root)
    {
        cout<<root->data<<" ";
        root = root->next;
    }
    cout<<endl;
}
int main()
{
    node* head = NULL; // this is not the first node..
    // this is just a pointer that will point to the first node..
    int n;cin>>n;
    int val;
    for(int i = 0; i < n; i++)
    {
        cin>>val;
        insert_node(head, val);
    }
    display(head);
    reverse_list(head);
    display(head);

    return 0;
}