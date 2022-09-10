// merge arrays in sorted order without using extra space 
/*
Modify arr1 so that it contains the first N elements and 
modify arr2 so that it contains the last M elements.
*/
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}



void merge_arrays(int a1[], int a2[], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int  j = 0; j < m; j++)
        {
            if(a1[i] > a2[j])
            {
                swap(&a1[i], &a2[j]);
                sort(a2, a2+m); // necessary to rearrange the second array
                break;
            }
        }
        
    }
    
}

void print_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
}

int main()
{
    int a1[] = {1, 4, 8, 10};
    int a2[] = {2, 3, 9};
    int n = sizeof(a1)/sizeof(a1[0]);
    int m = sizeof(a2)/sizeof(a2[0]);
    // op --> [1, 2, 3] --- [4, 5, 6]

    merge_arrays(a1, a2, n, m);
    print_array(a1, n);
    print_array(a2, m);
    return 0;
}