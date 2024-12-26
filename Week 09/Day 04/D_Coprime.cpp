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
        vi v(1001, -1);
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            v[x] = i;
        }

        int ans = -1;
        for (int i = 1; i <1001; i++)
        {
            if (v[i] != -1)
            {
                for (int j = 1; j<1001; j++)
                {
                    if (v[j] != -1 && __gcd(j, i) == 1)
                    {
                        ans = max(ans,v[i]+v[j]);
                    }
                }
            }
        }
        cout << ans <<endl;
    }

    return 0;
}
