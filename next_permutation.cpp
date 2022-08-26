#include <bits/stdc++.h>
#include <vector>
using namespace std; 

void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

void next_permu(vector<int> &a)
{
   // first we will find the breakpoint
   int size = a.size(), i, j;
   for(i = size - 2; i >= 0; i--)
   {
        if(a[i] < a[i + 1])
        {
            // we have got the breakpoint
            break;
        }
   }
    // check if there is no breakpoint means the i reaches the start of the array
    // then simply reverse the array from start to end
    if(i < 0)
    {
        // using in-built function reverse 
        // (remember to import the bits/stdc.h lib)
        reverse(a.begin(), a.end());
    }
    else
    {
        // if there exist an breakpoint then find the element greater than
        // element at ith index by looping from the back
        for(j = size - 1; j >= 0; j--)
        {
            if(a[j] > a[i])
            {
                // we have got the element
                break;
            }
        }

        swap(&a[i], &a[j]);
        reverse(a.begin() + i + 1, a.end());
    }
    
}
int main()
{
    int n;cin>>n;
    vector<int> array(n);

    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }

    next_permu(array);

    for(int i : array)
    {
        cout<<i<<" ";
    }
    
    return 0;
}