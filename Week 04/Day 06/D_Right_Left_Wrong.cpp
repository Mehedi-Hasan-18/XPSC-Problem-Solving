#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector<long long int> v(n);
        for (long long int i = 0; i < n; i++)
            cin >> v[i];
        string s;
        cin >> s;

        long long int currSum = 0;
        for (long long int i = 0; i < n; i++)
        {
            currSum += v[i];
        }

        long long int ans = 0, l = 0, r = n - 1;

        while (l <= r)
        {
            while (l <= r && s[l] != 'L')
            {
                currSum -= v[l];
                l++;
            }
            while (l <= r && s[r] != 'R')
            {
                currSum -= v[r];
                r--;
            }

            if (l < r)
            {
                ans += currSum;
                currSum -= v[l];
                currSum -= v[r];
                l++;
                r--;
            }
            else
            {
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
