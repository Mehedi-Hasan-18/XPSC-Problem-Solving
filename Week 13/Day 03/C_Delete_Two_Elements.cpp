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
        int n;
        cin >> n;
        ll sum = 0;
        unordered_map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            mp[x]++;
            sum += x;
        }
        ll ans = 0;
        ll sumt = (sum / n) * (n - 2);

        for (auto it : mp)
        {
            ll ai = it.first;
            if (mp[ai])
            {
                ll k = sum - ai;
                ll aj = k - sumt;
                if (ai == aj)
                {
                    ll xt = it.second;
                    ans += (xt - 1) * (xt) / 2;
                }
                else if (mp.find(aj) != mp.end())
                {
                    ans += mp[aj] * it.second;
                    mp[aj] = 0;
                    mp[ai] = 0;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}
