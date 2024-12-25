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
        vll v(n,0);
        f_range cin >> v[i];
        ll max_gcd = 1,sum = 0;
        vll p(n,0);
        p[0] = v[0];
        for(ll i= 1;i<n;i++) {
            p[i] = v[i] + p[i-1];
        }
        sum = p[n-1];
        for(ll i=0;i<n-1;i++){
            max_gcd = max(__gcd(p[i],sum-p[i]),max_gcd);
        }

        cout << max_gcd <<endl;
    }

    
    return 0;
}
