#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;

        int left = *lower_bound(v.begin(), v.end(), l);
        int right = *upper_bound(v.begin(), v.end(), r);

        cout << right - left <<" ";
    }

    return 0;
}
