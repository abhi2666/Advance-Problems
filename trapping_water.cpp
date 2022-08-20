#include <iostream>
#include <vector>
using namespace std;

int get_water(int a[], int size)
{
    int left[size] = {0};
    int right[size] = {0};
    int max = 0, n_max;
    int total = 0;
    //preparing left array

    for (int i = 0; i < size; i++)
    {
        n_max = a[i];
        if(n_max > max)
        {
            max = n_max;
        }
        left[i] = max;
    }

    //preparing right array
    max = 0;
    for (int i = size - 1; i >= 0; i--)
    {
        n_max = a[i];
        if(n_max > max)
        {
            max = n_max;
        }
        right[i] = max;
    }
    /// finding the answer

    for(int i = 0; i < size; i++)
    {
        total += (min(left[i], right[i]) - a[i]);
    }
    return total;
    
}
int main()
{
    int a[] = {3,1,2,4,0,1,3,2};
    int size = sizeof(a)/sizeof(a[0]);
    int trapped_water = get_water(a, size);
    cout<<trapped_water<<endl;
    return 0;
}