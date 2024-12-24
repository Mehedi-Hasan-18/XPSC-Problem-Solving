#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll LCM(ll x, ll y)
{
    return (x / __gcd(x, y) * y);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    ll mx = LLONG_MAX;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0 && LCM(i, n / i) == n)
        {
            mx = min(mx, max(i, n / i));
        }
    }
    cout << n / mx << " " << mx << endl;
    return 0;
}
