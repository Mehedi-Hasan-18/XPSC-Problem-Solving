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
        int n, m, k;
        cin >> n >> m >> k;
        int a[n], b[m];
        map<int, int> mp1, mp2;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i], mp2[b[i]]++;
        for (int i = 0; i < m; i++)
        {
            mp1[a[i]]++;
        }
        int ans = 0, curr = 0;
        for (auto it : mp1)
        {
            curr += (min(it.second, mp2[it.first]));
        }
        if (curr >= k)
            ans++;
        for (int i = m; i < n; i++)
        {
            int prev = (min(mp1[a[i - m]], mp2[a[i - m]]));
            mp1[a[i - m]]--;
            int now = (min(mp1[a[i - m]], mp2[a[i - m]]));
            if (now > prev)
                curr++;
            else if (now < prev)
                curr--;
            prev = (min(mp1[a[i]], mp2[a[i]]));
            mp1[a[i]]++;
            now = (min(mp1[a[i]], mp2[a[i]]));
            if (now > prev)
                curr++;
            else if (now < prev)
                curr--;
            if (curr >= k)
                ans++;
        }
        cout << ans << endl;
    }

    return 0;
}
