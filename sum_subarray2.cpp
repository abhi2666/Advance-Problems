// find max sum out of all the subarrays that is possible
// sub array --> means contiguous part of that array

// Here we have used Kaden's Algo -https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/
#include <iostream>
#include <vector>
using namespace std;

int max_res(int a[], int s)
{
    int curr_sum = 0, max_sum = 0;

    for(int i = 0; i < s; i++)
    {
        curr_sum += a[i];

        if(curr_sum > max_sum)
        {
            max_sum = curr_sum;
        }
        if(curr_sum <= 0)
        {
            curr_sum = 0;
        }
    }

    return max_sum;
}
int main()
{
    int a[] = {1, 2, 3, -100, 5, 6};
    int size = sizeof(a)/sizeof(a[0]);
    int res = max_res(a, size);
    cout<<res<<endl;
    return 0;
}