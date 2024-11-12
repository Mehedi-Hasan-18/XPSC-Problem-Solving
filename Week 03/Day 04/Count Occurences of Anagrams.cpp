#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string pat = "fox";
    string txt = "foxjfhdskofx";
    int k = pat.size();
    int l = 0, r = 0;
    map<char, int> mp;
    for (int i = 0; i < k; i++) {
        mp[pat[i]]++;
    }
    int count = mp.size();
    int m = txt.size();
    int ans = 0;

    while (r < m) {
        if (mp.find(txt[r]) != mp.end()) {
            mp[txt[r]]--;
            if (mp[txt[r]] == 0) count--;
        }

        if (r - l + 1 == k) {
            if (count == 0) ans++;
            if (mp.find(txt[l]) != mp.end()) {
                if (mp[txt[l]] == 0) count++;
                mp[txt[l]]++;
            }
            l++;
        }
        r++;
    }
    cout << ans << endl;
    return 0;
}
