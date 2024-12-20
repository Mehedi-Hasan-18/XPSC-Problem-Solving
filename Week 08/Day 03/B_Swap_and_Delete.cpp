#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin >>t;
    while(t--){
        ll ans = 0;
        string s;
        cin>>s;
        ll n = (ll)s.size(); 
        ll a[2] = {0,0};
        for( ll i = 0 ; i < n ; i++) {
            a[s[i]-'0']++;
        }
        for(ll i = 0 ; i < n ; i++) {
            if(a[!(s[i]-'0')] > 0) {
                a[!(s[i]-'0')]--;
            }
            else {
                ans = n-i;
                break;
            }
        }
        cout<<ans<<endl;
        
    }

    
    return 0;
}
