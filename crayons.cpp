#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0, d = 0, u = 0;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'U' && s[i + 1] != 'U')
            {
                count++;
                u++;
            }
            else if (s[i] == 'D' && s[i + 1] != 'D')
            {
                count--;
                d++;
            }
        }
        if (count >= 0)
        {
            cout << d << endl;
        }
        else
        {
            cout << u << endl;
        }
    }

    return 0;
}