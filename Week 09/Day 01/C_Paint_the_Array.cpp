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
        vll v(n);
        f_range cin >> v[i];
        ll G1 = 0, G2 = 0;
        for (int i = 0; i < n; i += 2)
        {
            G1 = __gcd(G1, v[i]);
        }
        for (int i = 1; i < n; i += 2)
        {
            G2 = __gcd(G2, v[i]);
        }

        bool ok = true;
        ll ans = 0;
        for (int i = 0; i < n; i += 2)
        {
            if (v[i] % G2 == 0)
            {
                ok = false;
            }
        }
        if (ok)
        {
            ans = G2;
        }
        else
        {
            ok = true;
            for (int i = 1; i < n; i += 2)
            {
                if (v[i] % G1 == 0)
                {
                    ok = false;
                }
            }
            if (ok)
            {
                ans = G1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
