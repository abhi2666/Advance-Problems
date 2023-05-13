#include <iostream>
using namespace std;

void remove_dup(int a[], int n)
{
    int i = 0, j;
    j = i + 1;
    while(j < n)
    {
        if(a[j] != a[i])
        {
            //you got a new element 
            i = i + 1;
            a[i] = a[j];
        }
        j++;
    }
    i = i + 1;
    while(i < n)
    {
        a[i] = 0;
        i++;
    }
}

int main()
{
    int a[] = {1, 1, 2, 2, 2, 3, 3};
    int n = sizeof(a)/sizeof(a[0]);

    remove_dup(a, n);

    for(int i = 0; i < n; i++)
    {
        cout<<a[i];
    }
    return 0;
}