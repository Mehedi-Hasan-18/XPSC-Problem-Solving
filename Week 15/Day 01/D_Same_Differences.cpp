#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f_range for (int i = 0; i < n; i++)
#define f_reverse for (int i = n - 1; i >= 0; i--)
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        int a[n];

        unordered_map<ll, ll> mp;
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i] - (i + 1)]++;
        }

        for (auto x : mp)
        {
            ll z = x.second;
            ans += (z * (z - 1)) / 2;
        }
        cout << ans << "\n";
    }

    return 0;
}
