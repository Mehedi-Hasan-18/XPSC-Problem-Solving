#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f_range for (int i = 0; i < n; i++)
#define f_reverse for (int i = n - 1; i >= 0; i--)
using namespace std;

ll LCM(ll x, ll y)
{
    return (x / __gcd(x, y) * y);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    ll overlap = (n / LCM(a, b));
    ll x = (n / a) * p;
    ll y = (n / b) * q;
    ll ans = (x + y) - (overlap * (p + q)) + (overlap * max(p, q));
    cout << ans << endl;

    return 0;
}
