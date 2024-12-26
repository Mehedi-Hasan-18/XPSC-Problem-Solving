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
        ll l,r;cin >>l>>r;
        if(2*l*1LL <= r){
            cout << l << " "<<2*l<<endl;
        }
        else{
            cout << -1 << " "<<-1<<endl;
        }
        
    }

    
    return 0;
}
