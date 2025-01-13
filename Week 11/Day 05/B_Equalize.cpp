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
        ll n;
        cin >> n;
        vll arr(n);
        for(int i=0;i<n;i++) cin >> arr[i];
        set<ll> st;
        for (int i = 0; i < n; i++)
        {
            st.insert(arr[i]);
        }
        vll v;
        for (auto &it : st)
        {
            v.push_back(it);
        }
        ll ans = 0;
        for (int i = 0; i < v.size(); i++)
        {
            ll x = v[i];
            auto itt = lower_bound(v.begin(), v.end(), x + n);
            ll d = itt - v.begin() - i;
            ans = max(ans, d);
        }
        cout << ans << "\n";
    }

    return 0;
}
