#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    ll a[n],cnt1 = 0,cnt2 = 0, max1 = 0, cnt = 0, m1 = 1;
    map<ll, ll> m;

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
        if (a[i] != 1)
            m1 = max(m1, m[a[i]]);
    }

    if (n == 1)
        cout << 1;

    else
    {
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 2; j <= sqrt(a[i]); j++)
            {
                if (a[i] % j == 0)
                {
                    m[j]++;
                    m1 = max(m1, m[j]);

                    if (a[i] / j != j)
                    {
                        m[a[i] / j]++;
                        m1 = max(m1, m[a[i] / j]);
                    }
                }
            }
        }

        cout << m1;
    }

    return 0;
}