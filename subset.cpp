#include <iostream>
#include <vector>
#include<math.h>
using namespace std;

// subsets using bitwise operations

void subsets(vector<int> a)
{
    int count = pow(2, a.size());

    for(int i = 0; i < count; i++)
    {
        for(int k  = 0; k < a.size(); k++)
        {
            if((i & (1 << k)) != 0)
            {
                //if its set then print it
                cout<<a[k]<<" ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    vector<int> arr = {1, 2, 3};
    subsets(arr);
    return 0;
}