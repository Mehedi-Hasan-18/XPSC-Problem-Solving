#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long b, c, d;
    cin >> b >> c >> d;

    long long a = 0;

    for (long long i = 0; i < 64; i++) {
    long long aa = (1LL << i);
    long long bb = 0, cc = 0, dd = 0;

    if (aa & b) {
        bb = aa;
    } else {
        bb = 0;
    }

    if (aa & c) {
        cc = aa;
    } else {
        cc = 0;
    }

    if (aa & d) {
        dd = aa;
    } else {
        dd = 0;
    }

    if ((aa | bb) - dd == (aa & cc)) {
        a += aa;
    }
}

    if ((a | b) == (d + (a & c))) {
        cout << a << endl;
    } else {
        cout << -1 << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
