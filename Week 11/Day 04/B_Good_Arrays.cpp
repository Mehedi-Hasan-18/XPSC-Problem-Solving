#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f_range for(int i=0;i<n;i++)
#define f_reverse for(int i=n-1;i>=0;i--)
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;cin >>t;
    while(t--){
        ll n;cin >>n;
        vector<ll>v(n);
        for(ll i=0;i<n;i++) cin >> v[i];
        if(n==1){
            cout <<"NO\n";
            continue;
        }
        ll cnt = 0;
        ll sum = 0;
        for(ll i=0;i<n;i++){
            sum += v[i];
            if(v[i]==1) cnt++;
        }
        sum -= n;
        cout << ((sum >= cnt)? "YES\n":"NO\n");
    }
    return 0;
}
