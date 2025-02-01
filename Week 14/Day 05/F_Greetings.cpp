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

    vector<vector<int>> a(n, vector<int>(2));
    for (int i = 0; i < n; i++)
    {
        cin >> a[i][0] >> a[i][1];
    }

    sort(a.begin(), a.end());

    pbds<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(a[i][1]);
    }

    long long ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans += st.order_of_key(a[i][1]);
        st.erase(a[i][1]);
    }

    cout << ans << endl;

    return 0;
}
