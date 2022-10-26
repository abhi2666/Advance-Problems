#include <iostream>
#include <vector>
using namespace std;

int searchElement(vector<vector<int>> mat, int n, int m, int target)
{
    int i = 0, j = m - 1;
    while(i < n && j >= 0)
    {
        if(target == mat[i][j])
        {
            return 1;
        }
        else if(mat[i][j] < target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return 0;
}


int main()
{
    int n, m, target = 4;
    vector<vector<int>> mat(n, vector<int>(m));
    //take elements for the matrix
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>mat[i][j];
        }
    }

    cout<<searchElement(mat, n, m, target);
    
    return 0;
}