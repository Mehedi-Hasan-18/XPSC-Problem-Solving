#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int>a(n);
    vector<int>b(n);

    for (int i = 0; i < n; ++i)
        cin >> a[i];

    for (int i = 0; i < n; ++i)
        cin >> b[i];

    vector<int>c(n);

    for (int i = 0; i < n; ++i)
        c[i] = b[i] - a[i];

    sort(c.begin(), c.end());

    int ans = 0;

    for (int i = 0; i < n; ++i)
    {

        auto it = lower_bound(c.begin() + i + 1, c.end(), -c[i]);
        int id = it - c.begin();

        ans += id - (i + 1);
    }

    cout << ans << '\n';

    return 0;
}