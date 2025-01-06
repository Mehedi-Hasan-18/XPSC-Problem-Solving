#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    ll k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    ll low = 0, high = 1e18, result = 0;

    while (low <= high) {
        ll mid = low + (high - low) / 2;
        ll operations = 0;

        for (int i = n / 2; i < n; i++) {
            if (mid > a[i]) operations += (mid - a[i]);
            if (operations > k) break; 
        }

        if (operations <= k) {
            result = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << result << endl;

    return 0;
}
