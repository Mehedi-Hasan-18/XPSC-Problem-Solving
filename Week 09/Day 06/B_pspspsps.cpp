#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>

int main() {
    int T;
    cin >> T;
    while (T--) {
        ll n;
        cin >> n;
        string s;
        cin >> s;

        vi a(n, -1);
        ll cur = 1;
        for (ll i = 0; i < n; i++) {
            if (s[i] != 'p' && i + 1 < n) 
                continue;

            ll j = i;
            while (j >= 0 && a[j] == -1) {
                a[j] = cur;
                cur++;
                j--;
            }
        }

        bool fl = true;
        ll sum = 0;
        for (ll i = n - 1; i >= 0; i--) {
            sum += a[i];
            if (s[i] != 's') 
                continue;

            ll l = n - i;
            if (l * (l + 1) / 2 != sum) {
                fl = false;
            }
        }

        cout << (fl ? "YES" : "NO") << endl;
    }

    return 0;
}
