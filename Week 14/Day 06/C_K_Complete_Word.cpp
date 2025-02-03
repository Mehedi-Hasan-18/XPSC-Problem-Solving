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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int ans = 0;

        for (int i = 0; i < k / 2; ++i)
        {
            int cnt[26] = {};

            for (int st = 0; st + k - 1 < n; st += k)
            {
                int i1 = st + i;
                int i2 = st + (k - 1 - i);

                cnt[s[i1] - 'a']++;
                cnt[s[i2] - 'a']++;
            }

            int req = 2 * (n / k);
            int mx = *max_element(cnt, cnt + 26);

            ans += req - mx;
        }

        if (k & 1)
        {
            int cnt[26] = {};

            for (int i = k / 2; i < n; i += k)
            {
                cnt[s[i] - 'a']++;
            }

            int req = n / k;
            int mx = *max_element(cnt, cnt + 26);

            ans += req - mx;
        }

        cout << ans << '\n';
    }

    return 0;
}
