#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
ll getPrime(ll n) {
    for (ll i = 2; i*i <= n; i++) {
        if (__gcd(n, i) == i) return i;
    }
    return n; 
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;
    while(t--){
        ll l,r;
        cin>>l>>r;
        if(r <= 3) {
            cout<<-1<<endl;
        }
        else {
            if(l < r) {
                if(r%2 != 0) {
                    r--;
                }
                cout<<2<<" "<<r-2<<endl;
            }
            else {
                ll prime = getPrime(l);
                if(prime == l)
                    cout<<-1<<endl;
                else
                    cout<<prime<<" "<<l-prime<<endl;
            }
        }
    }     
    return 0;
}