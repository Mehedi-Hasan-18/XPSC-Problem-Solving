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
        string pos;
        cin >> pos;
        string str = "abcdefgh";
        for (ll i = 1; i <= 8; i++)
        {
            if (pos[1] - '0' != i)
                cout << pos[0] << i << endl;
        }
        for (ll i = 0; i < 8; i++)
        {
            if (pos[0] != str[i])
            {
                cout << str[i] << pos[1] << endl;
            }
        }
    }

    return 0;
}
