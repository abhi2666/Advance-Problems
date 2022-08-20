#include <iostream>
#include <vector>
using namespace std;

void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

int partition(vector<int> a, int l, int h)
{
    // this function will return pivot element
    int pvt = a[l];
    int i = l, j = h;
    do
    {
        do
        {
            i++; // to find the larger element that pvt
        } while (a[i] <= pvt);
        do
        {
            j--; // to find the smaller element than pvt
        } while (a[j] > pvt);

        if (i < j)
        {
            swap(&a[i], &a[j]);
        }
    } while (i < j);

    swap(&a[l], &a[j]);
    return j;
}

void quicksort(vector<int> a, int l, int h)
{
    int j;
    if (l < h)
    {
        j = partition(a, l, h); // get the partition element
        quicksort(a, l, j);
        quicksort(a, j + 1, h);
    }
}
int main()
{
    vector<int> arr = {4, 3, 2, 1};
    int n = arr.size();

    // sort
    quicksort(arr, 0, n);

    // print sorted array
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}