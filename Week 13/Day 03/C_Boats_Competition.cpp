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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        int maxi = 0;
        for (int i = 1; i <= (2 * n); i++)
        {
            int total = 0;
            for (auto j : mp)
            {
                int other = i - j.first;
                if (other >= 1 && mp.count(other))
                    total += min(j.second, mp[other]);
            }
            total /= 2;
            maxi = max(maxi, total);
        }
        cout << maxi << "\n";
    }

    return 0;
}
