#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int T;
    cin >> T;
    int n, max, min, count;
    while (T--)
    {

        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int dist[n];
        int k = 0;
        dist[k++] = 0;
        for (int i = 0; i < n - 1; i++, k++)
        {
            dist[k] = a[i + 1] - a[i];
        }

        count = 1;
        max = 0;
        min = 9999;
        for (int i = 1; i < n; i++)
        {
            if (dist[i] <= 2)
            {
                count++;
            }
            else
            {
                if (min > count)
                {
                    min = count;
                }
                if(max < count)
                {
                    max = count;
                }
                count = 1;
            }
        }
        if (min > count)
        {
            min = count;
        }
        if(max < count)
        {
            max = count;
        }
        cout << min << " " << max << endl;
    }
    return 0;
}