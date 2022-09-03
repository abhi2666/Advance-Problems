#include <iostream>
#include <vector>
using namespace std;

int stocks(int a[], int n)
{
    int minsofar = 9999;
    int curr_profit = 0, max_profit = 0;

    for (int i = 0; i < n; i++)
    {
        // find the minimum element so far
        minsofar = min(minsofar, a[i]);
        curr_profit = a[i] - minsofar;
        max_profit = max(max_profit, curr_profit);
    }
    
    return max_profit;
}

int main()
{
    int n;cin>>n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    int res = stocks(a, n);
    cout<<res<<endl;

    return 0;
}