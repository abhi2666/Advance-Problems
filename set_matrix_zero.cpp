#include <iostream>
#include <vector>
using namespace std;

// This is a brute force approach

void set_zero_brute(vector<vector<int>> &mat, int x, int y)
{
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            if(i == x || j == y)
            {
                mat[i][j] = -1;
            }            
        }
        
    }
}

void check_mat_brute(vector<vector<int>> &mat)
{
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            if(mat[i][j] == 0)
            {
                // if true then set the enrtire row and column to zero
                set_zero_brute(mat, i, j);
            }
        }
        
    }

    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            if(mat[i][j] == -1)
            {
                mat[i][j] = 0;
            }            
        }
        
    }
    
}

// This is optimised approach



void print_matrix(vector<vector<int>> mat)
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
    int rows, column;
    cin>>rows>>column;
    vector<vector<int>> matrix(rows, vector<int> (column));
    //taking elements 

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin>>matrix[i][j];
        }
        
    }
    
    check_mat_brute(matrix);
    print_matrix(matrix);

    return 0;
}