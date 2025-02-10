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
        string s;
        cin >> s;
        ll n = (ll)s.size(), c = 0, mini = INT_MAX, maxi;
        for (char i = 'a'; i <= 'z'; i++)
        {
            c = 0, maxi = 0;
            for (ll j = 0; j < n; j++)
            {
                if (s[j] != i)
                {
                    c++;
                    if (c > maxi)
                        maxi = c;
                }
                else
                {
                    c = 0;
                }
            }

            if (maxi < mini)
            {
                mini = maxi;
            }
        }

        if (mini == 0)
            cout << 0 << endl;
        else
        {
            c = 0;
            while (mini != 1)
            {
                mini /= 2;
                c++;
            }
            cout << c + mini << endl;
        }
    }

    return 0;
}
