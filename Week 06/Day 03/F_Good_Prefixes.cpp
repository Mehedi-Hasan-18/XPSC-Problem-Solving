#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;cin >>t;
    while(t--){
        ll n;cin >>n;
        vector<ll>v(n);
        for(ll i=0;i<n;i++){
            cin >> v[i];
        }
        ll mx = INT_MIN;
        ll sum=0,cnt=0;
        for(ll i=0;i<n;i++){
            sum += v[i];
            mx = max(mx,v[i]);
            if(sum - mx == mx) cnt++;
        }
        cout << cnt <<endl;
        
    }

    
    return 0;
}
