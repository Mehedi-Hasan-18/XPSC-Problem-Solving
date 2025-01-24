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
        map<char, ll> m;
        for (auto x : s)
        {
            m[x]++;
        }

        ll minUD = min(m['U'], m['D']);
        ll minLR = min(m['L'], m['R']);

        if (minUD == 0 && minLR == 0)
        {
            cout << 0 << endl;
            cout << " " << endl;
        }
        else if (minUD == 0)
        {
            cout << 2 << endl
                << "LR" << endl;
        }
        else if (minLR == 0)
        {
            cout << 2 << endl
                << "UD" << endl;
        }
        else
        {
            string s = "";
            for (ll i = 0; i < minUD; i++)
            {
                s += 'U';
            }
            for (ll i = 0; i < minLR; i++)
            {
                s += 'R';
            }
            s += string(minUD, 'D');
            s += string(minLR, 'L');

            cout << s.size() << endl
                << s << endl;
        }
    }

    return 0;
}
