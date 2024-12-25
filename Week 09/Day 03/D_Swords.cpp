#include <bits/stdc++.h>
#define ll long long
using namespace std;
int GCD(vector<ll>nums){
    ll result = 0;
    for(auto val : nums){
        result = __gcd(result,val);
        if(result == 1) break;;
    }
    return result;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n ;cin >> n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++) cin >> v[i];

    ll x = *max_element(v.begin(),v.end());

    vector<ll>s;
    for(ll i=0;i<n;i++){
        ll diff = x - v[i];
        if(diff >0) s.push_back(diff);
    }
    ll z = GCD(s);
    ll y = 0;
    for(auto val : s){
        y += val/z;
    }
    cout << y <<" "<<z <<endl;
    
    return 0;
}
