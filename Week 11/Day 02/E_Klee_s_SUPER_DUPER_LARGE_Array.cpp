#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f_range for(int i=0;i<n;i++)
#define f_reverse for(int i=n-1;i>=0;i--)
using namespace std;
ll getsum(ll a, ll n)
{
    ll sum = 2 * a + n - 1;
    sum *= n;
    sum /= 2;
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll lo = 1, hi = n, ans = 1e18;

        while (lo <= hi)
        {
            ll mid = lo+ (hi-lo)/2;
            ll res1 = getsum(k, mid);
            ll res2 = getsum(k + mid, n - mid);

            ans = min(ans, abs(res1 - res2));

            if (res2 >= res1)
            {
                lo = mid + 1;
            }
            else
            {
                hi = mid-1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
