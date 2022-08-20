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

bool check_palin(node* head)
{
    // to be done..
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

    return 0;
}