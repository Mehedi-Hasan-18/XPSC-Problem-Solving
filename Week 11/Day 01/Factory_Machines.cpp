#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, t;
    cin >> n >> t;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    ll low = 0, high = 1e18, time = -1;

    while (low <= high) {
        ll mid = low + (high - low) / 2;
        ll total = 0;
        bool possible = false;

        for (int i = 0; i < n; i++) {
            total += mid / v[i];
            if (total >= t) {
                possible = true;
                break;
            }
        }

        if (possible) {
            time = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << time << endl;
    return 0;
}
