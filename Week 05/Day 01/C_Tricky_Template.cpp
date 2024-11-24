#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin >>t;
    while(t--){
        int n;
        cin >> n;
        string a,b,c;
        cin >> a >> b >> c;
        bool f = false;
        for(int i=0;i<n;i++){
            if(a[i]!=c[i] && b[i] != c[i]){
                f = true;
                break;
            }
        }
        if(f) cout <<"YES\n";
        else cout <<"NO\n";
    }

    
    return 0;
}
