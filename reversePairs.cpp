/*
Reverse pairs --> where i < j and a[i] > 2*a[j]

1. Brute force..
2. Merge Sort O(nlogn)
*/
#include <iostream>
using namespace std;

int merge(int a[], int l, int mid, int h)
{
    int i = l, j = mid + 1, k = l, count = 0;
    for(i = l; i <= mid; i++)
    {
        while(j <= h && a[i] > 2*a[j])
        {
            count++;
            j++;
        }
    }
    int array[50];
    while (i <= mid && j <= h)
    {
        if (a[i] <= a[j])
        {
            array[k++] = a[i++];
        }
        else
        {
            array[k++] = a[j++];
        }
    }
    // for the remaining elements.. copy them as it is
    while (i <= mid)
    {
        array[k++] = a[i++];
    }
    while (j <= h)
    {
        array[k++] = a[j++];
    }
    // copy all the elements back to the original array
    for (i = l; i <= h; i++)
    {
        a[i] = array[i];
    }
    return count;
}

int mergeSort(int a[], int l, int h)
{
    int mid, res;
    if(l < h)
    {
        mid = (l + h) / 2;
        int res = mergeSort(a, l, mid);
        res += mergeSort(a, mid + 1, h);
        res += merge(a, l, mid, h);
    }
    return res;
}
int main()
{
    int a[] = {1, 3, 2, 3, 1};
    int size = sizeof(a) / sizeof(a[0]);

    mergeSort(a, 0, size);
    for (int  i = 0; i < size; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}