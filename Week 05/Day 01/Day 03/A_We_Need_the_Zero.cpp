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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans = ans ^ v[i];
        }
        if (n % 2 == 1)
        {
            cout << ans << endl;
        }
        else
        {
            if (ans == 0)
            {
                cout << 0 << endl;
            }
            else
                cout << -1 << endl;
        }
    }

    return 0;
}
