/*Program for getting largest subarray with sum zero
1. Brute Force --> find every subarray with sum zero and get the longest one.
2. Optimised --> use a map and for each element if its not in map then 
put it and if the element exist then----
    index of current element - index of that element will give the subarray
    you just find the largest one
*/

#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, int> m; // <sum, index(sum uptil this index)>
    int a[] = {6, -2, 2, -8, 1, 7, 4, -10};
    int n = sizeof(a)/sizeof(a[0]);
    int longest = 0, sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += a[i];
        if(sum == 0)
        {
            longest = i + 1;
        }
        else
        {
            // check if it already exist in map or not
            if(m.find(sum) != m.end()) //means if sum does already exist in map
            {
                longest = max(longest, i - m[sum]); // important 
            }
            else
            {
                //if element does not exist in the hash table then put it into 
                //map
                m[sum] = i;
            }
        }
    }
    cout<<longest<<endl;
    return 0;
}

