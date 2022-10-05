#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int T;cin>>T;
    while(T--)
    {
        int d, c, price;
        int fsum = 0, ssum = 0;
        for(int i = 0; i < 3; i++)
        {
            cin>>price;
            fsum += price;
        }
        for(int i = 0; i < 3; i++)
        {
            cin>>price;
            ssum += price;
        }

    }
    return 0;
}