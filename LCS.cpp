/*
Longest Consecutive Sequence -->
Example 1:

Input: [100, 200, 1, 3, 2, 4]

Output: 4

Approach -->
1. Brute Force - Sort the array and then find the longest sequence
2. Optimal approach --> using set 

    . put all elements into the set 
    . Check for each element if ele - 1 element exist ..
    if yes then move forward.
    . If no then check for ele + 1.. if it exist then check for ele + 2
    and soon and make a counter for it..
    . Do this for all elements and you will get your answer

*/

#include <iostream>
#include <set>
using namespace std;

int longestConsecutive(int a[], int n)
{
    int counter = 0; //for longest consecutive sequence
    set<int> s;
    for(int i = 0;  i < n; i++)
    {
        s.insert(a[i]);
    }

    for(int i = 0; i < n; i++)
    {
        if(!s.count(a[i] - 1))
        {
            //means currunt element is the smallest in its league
            int currentCount = 1;
            int currentEle = a[i];
            
            while(s.count(currentEle + 1))
            {
                currentCount++;
                currentEle++;
            }
            counter = max(currentCount, counter);
        }
    }
    return counter;
}
int main()
{
    int a[] = {100, 101, 101, 102, 103, 200, 1, 2, 3}; // answer = 4
    int n = sizeof(a)/sizeof(a[0]);
    cout<<longestConsecutive(a, n)<<endl;
    return 0;  
}