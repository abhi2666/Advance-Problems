#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> pascal(int rows)
{
    vector<vector<int>> pasc(rows);

    for (int i = 0; i < rows; i++)
    {
        //resize the matrix with each increasing rows
        pasc[i].resize(i + 1); //resizing a particular row
        //for each row, make the first and the last element 0
        pasc[i][0] = pasc[i][i] = 1;

        // for loop below is for the element in between
        for (int j = 1; j < i; j++)
        {
            //adding the elements of the previous rows into the new row.
            pasc[i][j] = pasc[i - 1][j - 1] + pasc[i - 1][j];
        }       
    }
    return pasc;
}
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> triangle = pascal(n);

    for (int i = 0; i < triangle.size(); i++)
    {
        for (int j = 0; j < triangle[i].size(); j++)
        {
            cout<<triangle[i][j];
        }
        cout<<endl;
    }
    
    return 0;
}