#include <iostream>
#include <vector>
using namespace std;

// Zig-Zag pattern --> a < b > c < d > e < f...

void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

void zig_zag(int a[], int n)
{
    bool flag = true;

    for(int i = 0; i < n - 1; i++)
    {
        if(flag)
        {
            if(a[i] > a[i + 1])
            {
                swap(&a[i], &a[i + 1]);
            }
        }
        else
        {
            if(a[i] < a[i + 1])
            {
                swap(&a[i], &a[i + 1]);
            }
        }
        flag = !flag; // changing the value
    }
}
int main()
{
    int a[] = { 4, 3, 7, 8, 6, 2, 1};
    int size = sizeof(a)/sizeof(a[0]);

    zig_zag(a, size);

    for(auto i : a)
    {
        cout<<i<<" ";
    }
    return 0;
}