#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll l = max(n - m, 0LL);
        ll r = n + m;
        ll ans = 0;
        for (int i = 0; i < 32; i++)
        {
            ll c = r / (1LL << i);
            if (c % 2)
            {
                ans |= 1LL << i;
                continue;
            }
            if (l == 0)
            {
                if (c)
                    ans |= 1LL << i;
                continue;
            }
            ll c2 = l / (1LL << i);
            if (c != c2)
                ans |= 1LL << i;
        }
        cout << ans << '\n';
    }

    return 0;
}
