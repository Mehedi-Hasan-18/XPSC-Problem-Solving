#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,q;
    cin >> n >> q;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];

    vector<int> diff(n+1);
    for(int i=0;i<q;i++){
        int l,r;
        cin >> l >> r;
        l--,r--;
        diff[l]++;
        diff[r+1]--;
    }

    for(int i=1; i<=n;i++){
        diff[i] = diff[i-1]+diff[i];
    }

    sort(diff.rbegin(),diff.rend());
    sort(a.rbegin(),a.rend());

    long long ans = 0;
    for(int i=0;i<n;i++){
        ans += (1LL * a[i]*diff[i]);
    }

    cout << ans << endl;

    
    return 0;
}
