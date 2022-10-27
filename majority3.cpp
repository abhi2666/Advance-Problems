/*
Majority element that exist more that n/3 times in an array
Note --> there can be at max of 2 elements that can exist in an array 
more that n/3 times..obivously less that 2 is definitely possible..
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> getMajorit(int a[], int n)
{
    int n1, n2, c1, c2, count1, count2;
    c1 = c2 = count1 = count2 = 0;
    n1 = n2 = -1;
    vector<int> res(2, -1);
    for (int i = 0; i < n; i++)
    {
        if(n1 == a[i])
        {
            c1++;
        }
        else if(n2 == a[i])
        {
            c2++;
        }
        else if(c1 == 0)
        {
            n1 = a[i];
        }
        else if(c2 == 0)
        {
            n2 = a[i];
        }
        else
        {
            c1--;
            c2--;
        }
    }

    // now check for these elements that are they really majority
    for (int i = 0; i < n; i++)
    {
        if(a[i] == n1)
        {
            count1++;
        }
        else if(a[i] == n2)
        {
            count2++;
        }
    }
    if(count1 > n/3)
    {   
        res.clear(); // clearing the vector before using is important
        res.push_back(n1);
    }
    if(count2 > n/3)
    {
        res.push_back(n2);
    }
    
    return res;
}

int main()
{
    int a[] = {1, 1, 1, 2, 2, 3, 3, 3};
    int size = sizeof(a)/sizeof(a[0]);
    
    vector<int> result = getMajorit(a, size);
    for(int a : result)
    {
        cout<<a<<" ";
    }
    return 0;
}