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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
            cin >> v[i];
        vector<ll> freq(n + 2, 0);
        for (ll i = 0; i < n; i++)
        {
            if (v[i] > n)
                continue;
            freq[v[i]]++;
        }
        ll ans = 0;
        for (ll i = 1; i <= n; i++)
        {
            ll total = 0;
            for (ll j = 1; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    total += freq[j];
                    if (j * j != i)
                    {
                        total += freq[i / j];
                    }
                }
            }
            ans = max(ans, total);
        }

        cout << ans << endl;
    }

    return 0;
}
