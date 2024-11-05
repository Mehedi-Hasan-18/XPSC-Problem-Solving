#include <bits/stdc++.h>
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

        map<char, int> mp;
        for (auto ch : s)
        {
            mp[ch]++;
        }

        int even = 0, odd = 0;

        for (auto el : mp)
        {
            even += (el.second % 2 == 0);
            odd += (el.second % 2 != 0);
        }

        if (k < odd - 1)
        {
            cout << "NO" << endl;
        }
        else cout << "YES" << endl;
    }

    return 0;
}
