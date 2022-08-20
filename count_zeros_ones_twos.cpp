#include <iostream>
#include <vector>
using namespace std;

void sort(int a[], int n)
{
    int z, o, t, i;
    z = o = t = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            z++;
        }
        else if (a[i] == 1)
        {
            o++;
        }
        else
        {
            t++;
        }
    }

    // creating the array
    i = 0;
    while (true)
    {
        while (z)
        {
            a[i++] = 0;
            z--;
        }
        while (o)
        {
            a[i++] = 1;
            o--;
        }
        while (t)
        {
            a[i++] = 2;
            t--;
        }
        break;
    }
}
int main()
{
    int a[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int n = sizeof(a) / sizeof(a[0]);

    sort(a, n);

    for (int i : a)
    {
        cout << i << " ";
    }
    return 0;
}