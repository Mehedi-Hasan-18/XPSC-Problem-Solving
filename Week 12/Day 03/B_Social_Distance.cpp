#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        ll cnt = n;
        sort(a, a + n);

        for (int i = 1; i < n; i++)
            cnt += max(a[i], a[i - 1]);

        cnt += max(a[0], a[n - 1]);

        cout << (cnt <= m ? "YES" : "NO") << endl;
    }

    return 0;
}