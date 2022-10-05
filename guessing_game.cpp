#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;
        int alice = 0, counter = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if ((i % 2 == 0 && j % 2 != 0) || (i % 2 != 0 && j % 2 == 0))
                {
                    // sum will be odd
                    alice++;
                }
                counter++;
            }
        }

        while (1)
        {
            if (alice != 0)
            {
                if (counter % alice == 0)
                {
                    counter /= alice;
                    alice = 1;
                }
            }

            break;
        }
        cout << alice << "/" << counter << endl;

        // cout<<3/3<<endl;
    }
    return 0;
}