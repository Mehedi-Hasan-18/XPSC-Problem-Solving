#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<int> dp(n);
    for (int i = 0; i < n; i++)
    {
        cin >> dp[i];
    }
    int ans1 = 0;
    int ans2 = 0;
    int who = 1;
    while (!dp.empty())
    {
        int left = dp.front(), right = dp.back(), mx;
        mx = max(left, right);
        if (who % 2 != 0)
            ans1 += mx;
        else
            ans2 += mx;
        if (mx == dp.front())
            dp.pop_front();
        else
            dp.pop_back();
        who++;
    }
    cout << ans1 << " " << ans2 << '\n';

    return 0;
}
