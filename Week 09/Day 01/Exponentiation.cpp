#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f_range for(int i=0;i<n;i++)
#define f_reverse for(int i=n-1;i>=0;i--)
using namespace std;
const int MOD = 1e9 + 7;
ll power(ll y,ll n){
    ll ans = 1%MOD;
    while(n){
        if(n&1){
            ans = ((ans%MOD * y%MOD)%MOD);
        }
        else{

        }
        n >>= 1;
        y = 1LL * y * y % MOD;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin >>t;
    while(t--){
        ll n,x;cin >>n>>x;
        cout << power(n,x)<<endl;
    }

    
    return 0;
}
