#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f_range for (int i = 0; i < n; i++)
#define f_reverse for (int i = n - 1; i >= 0; i--)
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    map<ll, ll> mp;
    ll mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        mp[v[i]]++;
        mn = min(mn, v[i]);
    }
    if (mp[mn] == 1)
    {
        cout << "YES\n";
        return;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if ((v[i] % mn) != 0)
            {
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
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
