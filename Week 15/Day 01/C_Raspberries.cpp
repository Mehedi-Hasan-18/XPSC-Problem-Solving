#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f_range for (int i = 0; i < n; i++)
#define f_reverse for (int i = n - 1; i >= 0; i--)
using namespace std;

bool odd(ll num) { return ((num & 1) == 1); }
bool even(ll num) { return ((num & 1) == 0); }

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

        vi arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int d = k - 1;
        int e_cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (even(arr[i]))
                e_cnt++;

            if (arr[i] % k == 0)
                d = 0;
            else
                d = min(d, k - arr[i] % k);
        }

        if (k != 4)
        {
            cout << d << endl;
        }
        else
        {
            if (e_cnt >= 2)
                cout << 0 << endl;
            else if (e_cnt == 1)
                cout << min(d, 1) << endl;
            else
                cout << min(2, d) << endl;
        }
    }

    return 0;
}
