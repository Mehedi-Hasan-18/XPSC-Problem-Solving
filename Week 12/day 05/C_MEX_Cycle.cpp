#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f_range for (int i = 0; i < n; i++)
#define f_reverse for (int i = n - 1; i >= 0; i--)
using namespace std;
const long long int INF = LLONG_MAX;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll T;
    cin >> T;
    while (T--)
    {
        ll n, x, y;
        cin >> n >> x >> y;
        x--;
        y--;
        if (x > y)
            swap(x, y);
        const ll d = y - x;
        vi a(n, -1);
        for (ll i = 0; i < d; i++)
            a[i] = i & 1;
        for (ll i = 1, j = n - 1; j > d; j--, i++)
            a[j] = i & 1;
        auto getMex = [&](const ll i, const ll j, const ll k) -> ll
        {
            set<ll> s = {i, j, k};
            ll c = 0;
            while (s.count(c))
                c++;
            return c;
        };
        a[d] = getMex(a[0], a[(d - 1 + n) % n], a[(d + 1 + n) % n]);
        vi b(n, -1);
        for (ll i = 0; i < n; i++)
            b[i] = a[(i + n - x) % n];
        for (ll i = 0; i < n; i++)
        {
            ll c = INF;
            if (i == x)
                c = b[y];
            if (i == y)
                c = b[x];
            const ll me = getMex(c, b[(i - 1 + n) % n], b[(i + 1 + n) % n]);
            assert(me == b[i]);
        }

        for (ll i = 0; i < n; i++)
            cout << b[i] << " \n"[i + 1 == n];
    }
    return 0;
}
