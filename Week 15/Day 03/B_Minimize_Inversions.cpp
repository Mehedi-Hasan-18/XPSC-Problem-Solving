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
        vector<int> a(n), b(n + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[a[i]];
        }
        for (int i = 0; i < n; i++)
        {
            cout << i + 1 << " \n"[i == n - 1];
        }
        for (int i = 1; i <= n; i++)
        {
            cout << b[i] << " \n"[i == n];
        }
    }

    return 0;
}
