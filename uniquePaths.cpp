/*
Given a matrix you just have to find all the paths that lead from 
the top-left of the mat to the bottom-right of the mat.
Note --> you can only move one step right or one step down..

Methods -->
1. Recursive Style..
2. Optimised recursive style..
3. Formula based approach..
*/

#include <iostream>
#include <vector>
using namespace std;


int paths(int n)
{
    int N = (n + n - 2); //no. of right and down you have to take in order
    // to reach your destination
    int r = n - 1;
    double res = 1.0;
    for(int i = 1; i <= r; i++)
    {
        res *= (N - r + i)/i;
    }
    return (int)res;
}
int main()
{
    int mat[3][3] = {{1, 2, 3}, 
                     {4, 5, 6},
                     {7, 8, 9}};

    cout<<paths(3)<<endl;                 

    return 0;
}
