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
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int last = 0;
        int ans = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            ans = max(ans, arr[i] - last);
            last = arr[i];
        }
        ans = max(ans, 2 * (x-last));
        cout << ans << endl;
    }

    return 0;
}
