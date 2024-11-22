#include <bits/stdc++.h>
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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int total_sum = 0;
        for (int i = 0; i < n; i++)
            total_sum += v[i];

        if (total_sum < k)
        {
            cout << "-1\n";
            continue;
        }
        if (total_sum == k)
        {
            cout << "0\n";
            continue;
        }

        int ans = 0;
        int r = 0, l = 0;
        int sum = 0;
        while (r < n)
        {
            sum += v[r];
            if (sum == k)
            {
                ans = max(ans, r - l + 1);
            }
            while (sum > k && l <= r)
            {
                sum -= v[l];
                l++;
            }
            r++;
        }
        cout << n - ans << endl;
    }

    return 0;
}
