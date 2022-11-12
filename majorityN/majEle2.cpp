//majority element that exist more than N/2

// we can use moore voting system

#include <iostream>
#include <vector>
using namespace std;

int majElement(int a[], int n)
{
    int count = 0, ele = 0;

    for(int i = 0; i < n; i++)
    {
        if(count == 0)
        {
            ele = a[i];
        }
        if(a[i] == ele)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    return ele;
}
int main()
{
    int a[5] = {3, 2, 3, 2, 2};
    cout<<majElement(a, 5);
    return 0;
}