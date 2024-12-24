#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll l,r;
    cin >> l >> r;
    ll left = l;
    ll right = r;
    if((r-l+1)%2 != 0) cout <<"NO\n";
    else{
        cout <<"YES\n";
        for(int i=l;i+1<=r;i+=2){
            cout << i <<" "<<i+1<<endl;
        }

    }
    
    return 0;
}
