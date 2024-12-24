#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f_range for(int i=0;i<n;i++)
#define f_reverse for(int i=n-1;i>=0;i--)
using namespace std;

ll GCD(ll a,ll b){
    return __gcd(a,b);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;cin >>t;
    
    while(t--){
        ll n;cin >>n;
        if(n%2==0){
            cout << n/2<<endl;
        }
        else cout <<(n-1)/2<<endl;
    }


    
    return 0;
}
