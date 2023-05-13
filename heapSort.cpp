#include <bits/stdc++.h>
using namespace std;
// while performing heapify we start from the last element and 
//compare the element with its children

void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

void heapify(int a[], int n)
{
    int temp;
    for(int i = (n - 1)/2; i >= 0; i--)
    {
        temp = max(a[2*i], a[2*i + 1]);
        //compare the element with its children
        if(a[i] < temp)
        {
            swap(&a[i], &temp);
        }
    }
}

int main()
{
    int a[] = {5, 10, 30, 20, 35, 40, 15};
    int size = sizeof(a)/sizeof(a[0]);

    // heapify --> to convert array into a max/min heap
    heapify(a, size);

    for(int i = 0; i < size; i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}