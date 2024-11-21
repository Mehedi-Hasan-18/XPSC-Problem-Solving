#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    map<int, int> freq; // Frequency map to count occurrences of each element
    int l = 0, r = 0;
    long long good_segments = 0;

    while (r < n) {
        // Add the current element to the frequency map
        freq[v[r]]++;

        // Ensure there are no more than k unique elements
        while ((int)freq.size() > k) {
            freq[v[l]]--;
            if (freq[v[l]] == 0) {
                freq.erase(v[l]);
            }
            l++;
        }

        // Add the count of segments ending at r
        good_segments += (r - l + 1);
        r++;
    }

    cout << good_segments << endl;
    return 0;
}
