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
        int n;
        cin >> n;
        int a[n];
        int x = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            x ^= a[i];
        }

        if (x == 0)
        {
            cout << "YES" << endl;
        }
        else
        {

            int k = 0;
            int count = 0;
            for (int i = 0; i < n; i++)
            {
                k ^= a[i];
                if (k == x)
                {
                    k = 0;
                    count++;
                }
            }

            if (count >= 2)
            {
                cout << "YES" << endl;
            }

            else
                cout << "NO" << endl;
        }
    }

    return 0;
}
