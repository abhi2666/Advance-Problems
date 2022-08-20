#include <iostream>
#include <vector>
using namespace std;

// find the max sum out of all sub arrays
// we are using sliding window technique here
// Sliding Window -->https://www.geeksforgeeks.org/window-sliding-technique/

void check_sum(vector<int> a, int sum)
{
    int start = 0, curr_sum = a[0];

    for (int i = 0; i < a.size(); i++)
    {
        curr_sum += a[i];

        while (curr_sum > sum)
        {
            curr_sum -= a[start];
            start++;
        }
        if (curr_sum == sum)
        {
            cout << "Sum found" << endl;
            return;
        }
        // if (i < a.size())
        // {
        //     curr_sum += a[i];
        // }
    }
    cout << "sum not found" << endl;
}
int main()
{
    vector<int> a = {1, 2, -3, 7, 5};
    int sum = 5;
    check_sum(a, sum);
    return 0;
}