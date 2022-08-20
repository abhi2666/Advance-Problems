#include <iostream>
#include <vector>
using namespace std;

// This is a Brute force technique with TC = O(n * n)
// We can use maps for this question also

int find_subarray(int a[], int n)
{
    int max_len = 0;
    int curr_sum;

    for(int i = 0; i < n; i++)
    {
        curr_sum = 0;
        for(int j = i; j < n; j++)
        {
            curr_sum += a[j];

            if(curr_sum == 0)
            {
                // you may get multiple subarrays with sum 0 but 
                // you you have to find the one with the longest length
                max_len = max(max_len, j - i + 1);
            }
        }
    }

    return max_len;
}

int main()
{
    int a[] = {15, -2, 2, -8, 1, 7, 10, 23};
    int size = sizeof(a)/sizeof(a[0]);
    find_subarray(a, size);
   
    return 0;
}