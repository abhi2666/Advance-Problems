#include <iostream>
#include <vector>
using namespace std;

int recruit(int price[], int player[], int n, int sum)
{

    int forzero = 0, forone = 0, zero = 999, one = 999;
    for (int i = 0; i < n; i++)
    {
        if (player[i] == 0)
        {
            forzero = price[i];
            if (forzero < zero)
            {
                zero = forzero;
            }
        }
        else
        {
            forone = price[i];
            if (forone < one)
            {
                one = forone;
            }
        }
    }
    if (one + zero + sum <= 100)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int T;
    cin >> T;
    int n, s;
    while (T--)
    {
        cin >> n >> s;
        int price[n], player[n];
        for (int i = 0; i < n; i++)
        {
            cin >> price[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> player[i];
        }
        int ans = recruit(price, player, n, s);
        if (ans)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}