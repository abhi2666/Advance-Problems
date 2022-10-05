#include <iostream>
#include <vector>
using namespace std;

// this question is mathematics based and can be solved using 
// maths
int main()
{
    int T;cin>>T;
    int n, k, s;
    while(T--)
    {
        cin>>n>>k>>s;
        cout<<(s-(n*n))/(k - 1)<<endl;
        
    }
    return 0;
}