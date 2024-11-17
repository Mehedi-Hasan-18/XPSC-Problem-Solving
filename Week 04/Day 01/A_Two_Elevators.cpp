#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;cin>>t;
    while(t--){
        ll a,b,c;cin >> a>>b>>c;
        ll first = a-1;
        ll second ;
        if(c>b) {
            second = (c-b) + (c-1);
        }
        else {
            second = (b-c) + (c-1);
        }
        if(first<second) cout <<1 <<'\n';
        else if(first>second) cout <<2<<'\n';
        else if(first==second) cout <<3 <<'\n';
    }
    
    return 0;
}
