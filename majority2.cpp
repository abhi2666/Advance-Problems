/*
Program to find element which exist more than n/2 of the array.
We will use moore voting algo-

1. make a count var and init to zero.
2. if count == 0 means take the element as a[i]
3. if same element repeat increase the count else 
decrease the count.

(It is given that majority element is present more than N/2 times)
At the end you will get the majority element.
*/

#include <iostream>
#include <vector>
using namespace std;

int getMajority(vector<int> v)
{
    int count = 0, ele;
    for(int a : v)
    {
        if(count == 0)
        {
            //means we are not counting any element 
            // so count whatever element is there
            ele = a;
        }
        else if(ele == a)
        {
            count++; //counting that element frequency
        }
        else
        {
            count--; //we have got other element in the way 
            // so we are decreasing the count
        }
    }
    return ele;
}

int main()
{
    int n;
    cout<<"Enter how many element: "<<endl;
    cin>>n;
    vector<int> a(n, 0); // init with zero
    cout<<"Enter array elements"<<endl;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    cout<<getMajority(a)<<endl;

    return 0;
}