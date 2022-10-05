#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        long long int a[n];
        for(int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a, a + n, greater<int>());
        long long int sum = 0;
        int k = 0;
        while(k < n)
        {
            sum += a[k];
            k += 2;
        }
        cout<<sum<<endl;
    }
    
    return 0;
}