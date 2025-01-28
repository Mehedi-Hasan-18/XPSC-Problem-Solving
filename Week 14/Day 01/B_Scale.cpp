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
        vector<string> a(n);
        for (auto &s : a)
            cin >> s;
        for (int i = 0; i < n; i += k)
        {
            for (int j = 0; j < n; j += k)
                cout << a[i][j];
            cout << endl;
        }
    }
    return 0;
}
