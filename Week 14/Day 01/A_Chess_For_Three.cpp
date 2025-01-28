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
        ll a,b,c;
        cin >> a >> b >> c;

        ll sum = a+b+c;
        if (sum & 1)
            cout << "-1\n";
        else
            cout << min(a + b, sum / 2) << "\n";
    }

    return 0;
}
