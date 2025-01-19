#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(const string &s) {
    int l = 0, r = s.size() - 1;
    while (l < r) {
        if (s[l] != s[r]) return false;
        l++, r--;
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> strings(n);
    for (int i = 0; i < n; i++) {
        cin >> strings[i];
    }

    unordered_set<string> used;
    vector<string> prefix, suffix;
    string center;

    for (const string &s : strings) {
        string rev = s;
        reverse(rev.begin(), rev.end());

        if (used.count(rev)) {
            prefix.push_back(s);
            suffix.push_back(rev);
            used.erase(rev);
        } else {
            used.insert(s);
        }
    }

    for (const string &s : used) {
        if (isPalindrome(s)) {
            center = s;
            break;
        }
    }

    string result;
    for (const string &s : prefix) {
        result += s;
    }
    result += center;
    reverse(suffix.begin(), suffix.end());
    for (const string &s : suffix) {
        result += s;
    }

    cout << result.size() << endl;
    cout << result << endl;

    return 0;
}
