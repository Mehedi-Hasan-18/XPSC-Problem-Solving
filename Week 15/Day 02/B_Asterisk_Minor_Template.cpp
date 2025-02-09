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
        string a, b, fir = "", sec = "";
        ll a_sz, b_sz;
        cin >> a >> b;
        a_sz = (ll)a.size();
        b_sz = (ll)b.size();
        for (ll i = 0; i < (a_sz - 1); i++)
        {
            for (ll j = 0; j < (b_sz - 1); j++)
            {
                if (a[i] == b[j] and a[i + 1] == b[j + 1])
                {
                    fir = a[i];
                    sec = a[i + 1];
                    break;
                }
            }
            if (fir != "")
                break;
        }
        if (fir != "")
        {
            cout << "YES" << endl;
            cout << "*" << fir << sec << "*" << endl;
        }
        else
        {
            if (a[0] == b[0])
            {
                cout << "YES" << endl;
                cout << a[0] << "*" << endl;
            }
            else if (a[a_sz - 1] == b[b_sz - 1])
            {
                cout << "YES" << endl;
                cout << "*" << a[a_sz - 1] << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
