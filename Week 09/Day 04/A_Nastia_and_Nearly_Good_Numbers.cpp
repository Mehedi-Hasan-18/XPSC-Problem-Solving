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
        ll a,b;cin >>a>>b;
        if(b!=1){
            cout <<"YES\n";
            cout << a*b <<" "<<a <<" "<<(b+1)*a<<endl;
        }
        else cout <<"NO\n";
        
        
    }

    
    return 0;
}