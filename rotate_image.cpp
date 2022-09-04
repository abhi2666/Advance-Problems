#include <bits/stdc++.h>
#include <vector>
using namespace std;
// you have to rotate matrix 90 deg clockwise

void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

void rotate_mat(vector<vector<int>> &mat)
{
    // first we will transpose the matrix
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(&mat[i][j], &mat[j][i]);
        }
    }

    // now reverse each row of the matrix
    for (int i = 0; i < mat.size(); i++)
    {
        reverse(mat[i].begin(), mat[i].end());
    }
    
    return;
}


void print_mat(vector<vector<int>> mat)
{
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int row, column;
    cin >> row >> column;
    vector<vector<int>> mat(row, vector<int>(column));

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin>>mat[i][j];
        }     
    }

    rotate_mat(mat);
    print_mat(mat);

    return 0;
}