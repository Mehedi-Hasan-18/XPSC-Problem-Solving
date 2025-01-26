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
        ll n, k;
        cin >> n >> k;
        vector<ll> ans;
        ll x = n - k;
        ll a = (x + 1) / 2;
        ll b = x / 2;
        ans.push_back(1);
        ans.push_back(n);
        ll k2 = k / 2;
        for (int i = 1; i < k / 2; i++)
        {
            ll adiff, bdiff;
            if (a % k2 != 0)
            {
                adiff = (a / k2) + 1;
                a -= ((a / k2) + 1);
            }
            else
            {
                adiff = (a / k2);
                a -= ((a / k2));
            }
            if (b % k2 != 0)
            {
                bdiff = (b / k2) + 1;
                b -= ((b / k2) + 1);
            }
            else
            {
                bdiff = (b / k2);
                b -= ((b / k2));
            }
            ans.push_back(ans[ans.size() - 2] + adiff + 1);
            ans.push_back(ans[ans.size() - 2] - (bdiff + 1));
            k2--;
        }
        for (int i = k; i < n; i++)
        {
            if (i % 2 == 0)
                ans.push_back(ans[i - k] + 1);
            else
                ans.push_back(ans[i - k] - 1);
        }
        for (auto &el : ans)
            cout << el << " ";
        cout << endl;
    }

    return 0;
}
