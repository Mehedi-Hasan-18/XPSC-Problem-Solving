#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, n, sum;
        cin >> a >> b >> n >> sum;
        ll sum_n = sum / n;
        ll n_a = n * min(a,sum_n);
        ll left = sum - n_a;
        if (left <= b)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
