// search element in 2D array
#include <iostream>
#include <vector>
using namespace std;

bool find_target(vector<vector<int>> mat, int row, int col, int target)
{
    // to search in a 2D matrix
    // we can apply binary search also to each column to find the target
    // optimal approach - traverse from the top right of the mat and then search for the element
    int i = 0, j = col - 1;
    while(i < row && j >= 0)
    {
        if(mat[i][j] == target)
        {
            return true;
        } 
        if(mat[i][j] > target)
        {
            j--;
        }
        else
        {
            // target is greater
            i++;
        }
    }

    return false;

}
int main()
{
    int n, m;
    cin>>n>>m;
    vector<vector<int>> mat(n, vector<int>(m));
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin>>mat[i][j];
        }
    }
    int target;cin>>target;
    int res = find_target(mat, n, m, target);
    if(res)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
    return 0;
}