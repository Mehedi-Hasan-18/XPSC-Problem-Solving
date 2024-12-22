#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        ll ones = count(arr.begin(), arr.end(), 1);
        ll zeros = count(arr.begin(), arr.end(), 0);

        if (ones == 0)
            cout << 0 << endl;
        else
            cout << ones * (1LL << zeros) << endl;
    }

    return 0;
}
