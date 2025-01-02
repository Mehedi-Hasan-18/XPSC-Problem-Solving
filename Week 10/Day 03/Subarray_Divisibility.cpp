#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) 
        cin >> v[i];

    ll prefixSum = 0, cnt = 0;
    map<ll, ll> mp;
    mp[0]++;

    for (int i = 0; i < n; i++) {
        prefixSum = (prefixSum + v[i] % n + n) % n;
        cnt += mp[prefixSum];
        mp[prefixSum]++;
    }

    cout << cnt << '\n';

    return 0;
}
