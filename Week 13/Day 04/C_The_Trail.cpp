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
        ll n, m;
        cin >> n >> m;
        vector<vector<ll>> A(n, vector<ll>(m));
        string s;
        cin >> s;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cin >> A[i][j];
            }
        }
        vi R(n), C(m);
        for (ll i = 0; i < n; i++)
        {
            ll sum = 0;
            for (ll j = 0; j < m; j++)
            {
                sum += A[i][j];
            }
            R[i] = sum;
        }
        for (ll j = 0; j < m; j++)
        {
            ll sum = 0;
            for (ll i = 0; i < n; i++)
            {
                sum += A[i][j];
            }
            C[j] = sum;
        }
        ll x = 0, y = 0;
        ll cnt = 0;
        while (cnt < n + m - 1)
        {
            if (s[cnt] == 'D')
            {
                A[x][y] = -R[x];
                R[x] += A[x][y];
                C[y] += A[x][y];
                x++;
            }
            else
            {
                A[x][y] = -C[y];
                R[x] += A[x][y];
                C[y] += A[x][y];
                y++;
            }
            cnt++;
        }
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
