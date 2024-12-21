#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string s[8];
        int n = 8;
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }

        char c = '.';
        for (int i = 0; i < 8; i++)
        {
            if (count(s[i].begin(), s[i].end(), 'R') == n)
            {
                c = 'R';
                break;
            }
        }
        if (c == '.')
        {
            for (int i = n - 1; i >= 0; i--)
            {
                bool bug = false;
                for (int j = 0; j < n; j++)
                {
                    if (s[j][i] != 'B')
                    {
                        bug = true;
                        break;
                    }
                }
                if (!bug)
                {
                    c = 'B';
                    break;
                }
            }
        }
        cout << c << endl;
    }

    return 0;
}
