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
        vector<int> s(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        for (int i = 0; i < n; i++)
            cin >> s[i];

        int ans = 0;      
        int r = 0, l = 0; 
        int sum = 0;      

        while (r < n)
        {
            sum += v[r]; 
            if (r > 0 && s[r - 1] % s[r] != 0)
            {
                while (l < r)
                {
                    sum -= v[l];
                    l++;
                }
            }
            while (sum > k && l <= r)
            {
                sum -= v[l];
                l++;
            }
            ans = max(ans, r - l + 1);

            r++;
        }

        cout << ans << endl;
    }

    return 0;
}
