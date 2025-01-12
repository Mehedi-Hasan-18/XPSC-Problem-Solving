#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f_range for (int i = 0; i < n; i++)
#define f_reverse for (int i = n - 1; i >= 0; i--)
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int curr = 0;
    bool ok = false;
    for (int i = 0; i < n; i++)
    {
        if (v[i] < curr)
        {
            cout << "NO\n";
            return;
        }
        else
        {
            int x = v[i] / 10;
            int y = v[i] % 10;
            if (x >= curr)
            {
                if (y >= x)
                {
                    curr = y;
                }
                else
                {
                    curr = v[i];
                }
            }
            else
                curr = v[i];
        }
    }
    cout << "YES\n";
    return;
        
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
