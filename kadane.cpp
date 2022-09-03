#include <iostream>
#include <vector>
using namespace std;

// here we want the max sum possible from the subarray of same array

int get_sum(vector<int> a)
{
    int curr_max = 0, max = 0;
    for (int i = 0; i < a.size(); i++)
    {
        curr_max += a[i];
        if(curr_max > max)
        {
            max = curr_max;
        }
        if(curr_max < 0)
        {
            curr_max = 0;
        }
    }
    return max;
    
}
int main()
{
    int n;cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int longest_sum = get_sum(arr);
    cout<<longest_sum<<endl;
    
    return 0;
}