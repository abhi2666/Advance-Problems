#include <iostream>
#include <vector>
using namespace std;

// there are various methods to solve this problem, but you can go with 
// dutch national flag algorithm.. it is the best algo for this kind of
// problems.


void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

void sort(int a[], int n)
{
    int low, mid, high;
    low = mid = 0;
    high = n - 1;

    while(mid <= high)
    {
        // for 0
        if(a[mid] == 0)
        {
            swap(&a[low++], &a[mid++]);
        }
        else if(a[mid] == 1)
        {
            mid++; 
        }
        else if(a[mid] == 2)
        {

            swap(&a[mid], &a[high--]);
        }
    }
}
int main()
{
    int n;cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    sort(a, n);

    for(int i : a)
    {
        cout<<i<<" ";
    }
    
    return 0;
}