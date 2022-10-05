#include <iostream>
#include <vector>
using namespace std;
//HACKER RANK very easy question
inline void set_array(int a[], int n, int dist)
{
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        a[i] += dist;
    }
    
}
int main()
{
    int s, t;
    cin>>s>>t;
    int a, b;
    cin>>a>>b;
    int m, n;
    cin>>m>>n;
    int apples[m], oranges[n];
    set_array(apples, m , a);
    set_array(oranges, n, b);

    // main logic
    int ca = 0, co = 0;
    for(int i = 0; i < m; i++)
    {
        if(apples[i] >= s && apples[i]<= t)
        {
            ca++;
        }
    }
    for(int i = 0; i < n; i++)
    {
        if(oranges[i] >= s && oranges[i]<= t)
        {
            co++;
        }
    }
    cout<<ca<<endl;
    cout<<co<<endl;
    return 0;
}