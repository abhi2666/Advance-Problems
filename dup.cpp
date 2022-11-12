#include <iostream>
#include <vector>
using namespace std;
// This approach is same as the cycle detection in linked list
int duplicate(int a[], int n)
{
    int slow = a[0];
    int fast = a[0];

    do
    {
        slow = a[slow];
        fast = a[a[fast]];
    } while (slow != fast);
    //move fast to first element
    fast = a[0];
    // for the second time if they meet then that is your element
    while(slow != fast)
    {
        slow = a[slow];
        fast = a[fast];
    }
    return slow; //duplicate
}

int main()
{
    //only 1 duplicate element is there 
    // we will use linked list method
    int a[] = {1,3, 4,2,2};
    int n = sizeof(a)/sizeof(a[0]);

    cout<<duplicate(a, n)<<endl;
    
    return 0;
}