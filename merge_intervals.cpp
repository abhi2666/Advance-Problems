#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<vector<int>> merge_intervals(vector<vector<int>>& mat)
{
    vector<vector<int>> merged; // final merged vector

    if(mat.size() == 0)
    {
        // means the matrix is empty
        return merged; /// empty 2-D vector
    }

    //if not empty then first sort the 2-D Vector
    sort(mat.begin(), mat.end());
    // create a simple vector where you will store your pairs
    // compare it with the next pair and if they merge the put that pair into
    // merged 2-D vector..
    vector<int> val = mat[0]; // here we have putted the first interval in it
    // that is we have putted the first row inside it

    for(auto i : mat)
    {
        if(i[0] <= val[1]) // means last element of first pair and first
                           // element of second pair
        {
            val[1] = max(i[1], val[1]);
        }
        else
        {
            // pairs are not merging so include them as it is..
            merged.push_back(val); // push whatever pairs you have prepared into
                                   // final vector
            // move to the next pair 
            val = i; // i represents the next pair inside the mat
        }
    }
    merged.push_back(val); //there will exist a last pair inside val that 
                           //we need to push
    return merged;
}

void print_mat(vector<vector<int>> mat)
{
    cout<<"After merging the mat is -->"<<endl;
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
    int row, col;
    cin>>row>>col;
    vector<vector<int>> mat(row, vector<int>(col)); // 2-D Vector

    for(int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>mat[i][j];
        }
    }

    vector<vector<int>> res = merge_intervals(mat);

    print_mat(res);
    
    return 0;
}