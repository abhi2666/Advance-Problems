#include <iostream>
#include <vector>
using namespace std;

// Not working perfectly

void set_hash(int hash[], string a, int n)
{
    int i = 0;
    while (a[i] != '\0')
    {
        hash[a[i] - 97]++;
        i++;
    }
}

int check(string name, int hash[])
{
    int flag = 1, i = 0;
    while(name[i] != '\0')
    {
        if(hash[name[i] - 97]  == 0)
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int main()
{
    int T;
    cin >> T;
    string a, b;
    int n;
    while (T--)
    {
        cin >> a >> b;
        // cin>>n;
        int hash[26] = {0}, i;
        set_hash(hash, a, n);
        set_hash(hash, b, n);  

        cin>>n;
        string name;
        int res = 0;
        for(int i = 0 ; i < n; i++)
        {
            cin>>name;
            res = check(name, hash);
            
        }
        if(res)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
    }
    return 0;
}