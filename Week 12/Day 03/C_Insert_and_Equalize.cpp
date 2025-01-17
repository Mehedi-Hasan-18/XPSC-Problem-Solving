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
        long long n;
        cin >> n;
        long long gc = 0;
        vector<long long> v(n, 0);
        for (long long i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        vector<long long> o(n, 0);
        o[0] = v[0];
        for (long long i = 1; i < n; i++)
        {
            o[i] = v[i];
            v[i] -= v[0];
        }
        v[0] = 0;
        for (long long i = 0; i < n; i++)
        {
            gc = __gcd(gc, v[i]);
        }
        long long take = o[n - 1];
        long long l = 0;

        if (gc != 0)
        {
            for (long long i = 0; i < n; i++)
            {
                long long diff = take - o[i];
                l += diff / gc;
            }
            long long p = 0;
            for (long long i = 1; i <= n; i++)
            {
                long long m = take - gc * i;
                bool check = binary_search(o.begin(), o.end(), m);
                if (!check)
                {

                    l += i;
                    break;
                }
            }
        }

        if (gc == 0 || n == 1)
        {
            cout << n << endl;
        }
        else
        {
            cout << l << endl;
        }
    }

    return 0;
}
