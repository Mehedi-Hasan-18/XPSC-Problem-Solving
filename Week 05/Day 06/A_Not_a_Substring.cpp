#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int n = s.size();

        // Special case for "()"
        if (s == "()") {
            cout << "NO" << endl;
            continue;
        }

        // Check for consecutive '(' or ')'
        int g = 0;
        for (int i = 0; i < n - 1; ++i) {
            if ((s[i] == '(' && s[i + 1] == '(') || 
                (s[i] == ')' && s[i + 1] == ')')) {
                g = 1;
            }
        }

        string ans = "";
        if (g == 1) {
            for (int i = 0; i < n; ++i) {
                ans += "()";
            }
        } else {
            for (int i = 0; i < n; ++i) {
                ans += '(';
            }
            for (int i = 0; i < n; ++i) {
                ans += ')';
            }
        }

        cout << "YES" << endl;
        cout << ans << endl;
    }

    return 0;
}
