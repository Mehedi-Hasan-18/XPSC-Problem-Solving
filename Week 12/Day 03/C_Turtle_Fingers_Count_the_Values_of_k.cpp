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
        ll a, b, l;
        cin >> a >> b >> l;
        ll ans = 0;
        ll x = 0;
        set<int> k;
        while (true)
        {
            if (int(pow(a, x)) > l)
                break;
            if ((l % int(pow(a, x))) != 0)
                break;
            ll curr = l / int(pow(a, x));
            k.insert(curr);
            while (curr % b == 0)
            {
                curr /= b;
                k.insert(curr);
            }
            x++;
        }
        cout << k.size() << "\n";
    }

    return 0;
}
