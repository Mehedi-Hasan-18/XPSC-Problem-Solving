#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n - 1);
    for (auto &x : b) {
        cin >> x;
    }

    a[0] = b[0];
    a[n - 1] = b[n - 2];
    for (int j = 1; j < n - 1; j++) {
        a[j] = b[j] | b[j - 1];
    }

    bool fl = true;
    for (int j = 0; j + 1 < n; j++) {
        if (b[j] != (a[j] & a[j + 1])) {
            fl = false;
            break;
        }
    }

    if (!fl) {
        cout << -1 << endl;
        return;
    }

    for (int j = 0; j < n; j++) {
        cout << a[j] << " \n"[j + 1 == n];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
