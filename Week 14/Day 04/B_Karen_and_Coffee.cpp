#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, k, q;
    cin >> n >> k >> q;
    int arr[200002] = {0};
    int startloop = 200002, endloop = 0;

    for (int start, endd, i = 1; i <= n; ++i)
    {
        cin >> start >> endd;
        arr[start]++;
        arr[endd + 1]--;
        startloop = min(startloop, start);
        endloop = max(endloop, endd);
    }

    for (int i = startloop; i < endloop + 1; ++i)
    {
        arr[i] = arr[i] + arr[i - 1];
    }

    for (int i = 1; i < 200002; ++i)
    {
        if (arr[i] >= k)
        {
            arr[i] = arr[i - 1] + 1;
        }
        else
        {
            arr[i] = arr[i - 1];
        }
    }

    ll l, r;
    while (q--)
    {
        cin >> l >> r;
        cout << arr[r] - arr[l - 1] << endl;
    }

    return 0;
}
