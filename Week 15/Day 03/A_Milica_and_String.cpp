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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int count_B = 0;
        for (char c : s)
        {
            if (c == 'B')
                count_B++;
        }

        if (count_B == k)
        {
            cout << 0 << endl;
        }
        else
        {
            if (count_B < k)
            {
                int count = 0;
                for (int i = 0; i < n; i++)
                {
                    if (s[i] == 'A')
                        count++;
                    if (count == k - count_B)
                    {
                        cout << 1 << endl;
                        cout << i + 1 << " B" << endl;
                        break;
                    }
                }
            }
            else
            {
                int count = 0;
                for (int i = 0; i < n; i++)
                {
                    if (s[i] == 'B')
                        count++;
                    if (count == count_B - k)
                    {
                        cout << 1 << endl;
                        cout << i + 1 << " A" << endl;
                        break;
                    }
                }
            }
        }
    }

    return 0;
}
