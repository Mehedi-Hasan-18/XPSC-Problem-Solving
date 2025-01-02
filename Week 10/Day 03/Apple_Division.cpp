#include <bits/stdc++.h>
#define ll long long
using namespace std;

void appleDivision(ll i,ll n,ll sum1,ll sum2,vector<ll>&v,ll &mn){
    if(i==n){
        mn = min(mn,abs(sum1-sum2));
        return;
    }
    appleDivision(i+1,n,sum1+v[i],sum2,v,mn);
    appleDivision(i+1,n,sum1,sum2+v[i],v,mn);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;cin >>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++) cin >> v[i];
    ll mn = LLONG_MAX;

    appleDivision(0,n,0,0,v,mn);
    cout <<mn <<endl;
    return 0;
}
