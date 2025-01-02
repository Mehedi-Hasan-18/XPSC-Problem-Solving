#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,k;
    cin >> n >> k;
    vector<ll>v(n);
    for(ll i=0;i<n;i++) cin >> v[i];
    map<ll,ll>mp;
    mp[0] = 1;
    
    ll prefixSum = 0, cnt = 0;
    for(ll i=0;i<n;i++){
        prefixSum += v[i];
        ll remove = prefixSum - k;
        cnt += mp[remove];
        mp[prefixSum] += 1;
    }
    cout << cnt <<endl;

    
    return 0;
}
