#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin >> n >> k;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    map<ll,ll>mp;
    ll r = 0;
    ll ans =0;
    for(int i=0;i<n;i++){
        mp[v[i]]++;
        while (mp.size()>k)
        {
            mp[v[r]]--;
            if(mp[v[r]]==0) mp.erase(v[r]);
            r++;
        }
        ans += (i-r+1);
        
    }
    cout << ans <<endl;

    
    return 0;
}
