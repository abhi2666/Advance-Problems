#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T;cin>>T;
    int l, r;
    while(T--)
    {
        int sum = 0;
        cin>>l>>r;
        for(int i = l; i <= r; i++)
        {
            int temp = i;
            int rev_num = 0, digit = 0;
            while(temp != 0)
            {
            digit = temp%10;
            rev_num = rev_num*10 + digit;
            temp = temp/10;
            }
            if(i == rev_num)
            {
                sum += i;
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}