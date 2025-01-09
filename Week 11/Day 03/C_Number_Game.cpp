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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        int ans = 0;
        for (int k = n; k >= 0; k--)
        {
            vector<int> r = v;
            int steps = 1;
            int low = 0, high = n - 1;
            while (low <= high)
            {
                int req = k + 1 - steps;
                while (r[high] > req)
                {
                    high--;
                }
                if (high < 0 || high < low)
                {
                    break;
                }
                if (r[high] <= req)
                {
                    high--;
                    r[low] += req;
                    low++;
                    steps++;
                }
            }
            if (steps >= k + 1)
            {
                ans = max(ans, k);
            }
        }
        cout << ans << endl;
    }

    return 0;
}
