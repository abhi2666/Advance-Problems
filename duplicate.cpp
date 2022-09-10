// get duplicate element present in array 
/*
we have three methods for this-
1. Sort and then compare
2. use an aux array and count their frequency
3. Linked list cycle method

we will be implementing the third method here
--> we will use two pointers (slow, fast) just like in LL.
*/

#include <iostream>
#include <vector>
using namespace std;

int duplicate_element(vector<int> a)
{
    int slow, fast;
    slow = fast = a[0];

    // move slow 1 step and fast 2 step until they meet
    // note that we are not following the normal approach while traversing
    do
    {
        slow = a[slow];
        fast = a[a[fast]]; // moves two steps
    } while (slow != fast);
    // if they met somewhere then again set fast to a[0] and start
    // traversing.. if again slow == fast then return slow..
    fast = a[0];
    do
    {
        slow = a[slow];
        fast = a[fast];
    } while (slow != fast);
    // now slow or fast will be pointing to the duplicate element..
    return slow;
}

int main()
{
    vector<int> arr = {1, 2, 3, 3, 4};
    int ele = duplicate_element(arr);
    cout<<ele<<endl;
    return 0;
}
