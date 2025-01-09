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
        vector<int> v(k);
        for (int i = 0; i < k; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int c = 0;
        int ans = 0;
        for (int i = k - 1; i >= 0; i--)
        {
            int mice = v[i];
            if (mice <= c)
                break;
            
            ans++;
            int d = n - mice;
            c += d;
        }
        cout << ans << endl;
    }

    return 0;
}
