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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<int, int> mp;
        int tot = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] < a[i - 1])
            {
                mp[a[i - 1] - a[i]]++;
                tot++;
                a[i] = a[i - 1];
            }
        }
        int ans = 0, x = 0;
        for (auto p : mp)
        {
            ans += (p.first - x) * (tot + 1);
            tot -= p.second;
            x = p.first;
        }
        cout << ans << '\n';
    }

    return 0;
}
