#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int T;cin>>T;
    while(T--)
    {
        int n;cin>>n;
        int count = n;
        int tsum = 0;
        vector<int> odd;

        for(int i = 1; i <= n; i++)
        {
            tsum += i;
            if(i % 2 != 0)
            {
                odd.push_back(i);
            }
        }
        if(tsum % 2 == 0)
        {
            cout<<count<<endl;
        }
        else
        {
            cout<<count - 1<<endl;
        }


    }
    return 0;
}
