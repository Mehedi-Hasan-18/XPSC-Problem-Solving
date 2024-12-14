#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n), res(33, 0);
    for (auto &x : a) cin >> x;

    for(int j=0;j<32;j++){
        for (int i = 0; i < n; i++) {
            if (a[i] & (1 << j)) res[j]++;
        }
    }

    vector<int> ans;
    for(int i=1;i<=n;i++){
        bool ok = true;
        for(int j=0;j<32;j++){
            if (res[j] % i != 0) {
                ok = false;
                break;
            }
        }
        if (ok) ans.push_back(i);
    }

    sort(ans.begin(), ans.end());
    for (const auto &x : ans) cout << x << " ";
    cout << "\n";
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
