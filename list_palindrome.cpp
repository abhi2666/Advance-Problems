//check if number depicted by a list is palindrome or not
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

int count(node* head)
{
    int counter = 0;
    while(head)
    {
        counter++;
        head = head->next;
    }
    return counter;
}

node* reverse_list(node* midNext)
{ // reverses the list from mid->next and return the new pointer 
    // which points at the starting of the new list
    node* curr = midNext;
    node* prev = NULL;
    node* next = NULL;

    while(curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;

}

node* get_mid(node* head)
{
    // to get the middle element of the list which will be used to reverse 
    // the list from the middle till the end.
    node* slow = head;
    node* fast = head;

    while(fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

bool check_palin(node* head)
{
    // find the middle element
    node* mid = get_mid(head);

    // now reverse the list from mid->next
    // 1 2 3 2 1  --> 1->2->3  1->2->NULL;

    node*head2 = reverse_list(mid->next);
    
    // check for palindrome
    node* temp = head;
    while(head2 != NULL)
    {
        if(temp->data != head2->data)
        {
            return false;
        }

        temp = temp->next;
        head2 = head2->next;
    }
    return true;

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
    node* head = NULL; 
    int n;cin>>n;
    int val;
    for(int i = 0; i < n; i++)
    {
        cin>>val;
        insert_node(head, val);
    }
    display(head);
    bool res = check_palin(head);
    if(res == true)
    {
        cout<<"List is a Palindrome"<<endl;
    }
    else
    {
        cout<<"list is not a Palindorme"<<endl;
    }


    return 0;
}