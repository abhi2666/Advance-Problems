/*
Find repeating and missing element from 1 to N
methods -->
1. using hash table (aux array)
2. using basic maths (sum of n numbers formula)
*/

#include <iostream>
#include <vector>
using namespace std;

void repeat_miss(int a[], int num)
{
    long long int n = num;
    long long int s, p, missing, repeating;
    s = (n * (n + 1))/2;
    p = (n * (n + 1) * ((2*n) + 1))/6;
    // cout<<s<<" "<<p<<endl;

    for (int i = 0; i < n; i++)
    {
        s -= (long long int)a[i];
        p -= (long long int)a[i]*(long long int)a[i];
    }
    // cout<<s<<" "<<p<<endl;

    missing = repeating = 0;
    missing = (s + p/s)/2;
    repeating = missing - s;
    cout<<missing<<" "<<repeating<<endl;
}

int main()
{
    int a[] = {1, 2, 2, 3, 5};
    int n = sizeof(a)/sizeof(a[0]);

    repeat_miss(a, n);

    return 0;
}