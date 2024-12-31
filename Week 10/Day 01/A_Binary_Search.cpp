#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin >> n >> k;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    for(int i=0;i<k;i++){
        int key,l=0,r=n-1,mid;
        cin >> key;
        bool ok = false;
        while(l<=r){
            mid = (l+r)/2;
            if(key == v[mid]){
                ok = true;
                break;
            }
            else if(key > v[mid]){
                l = mid + 1;
            }
            else {
                r = mid-1;
            }
        }
        if(ok) cout <<"YES\n";
        else cout <<"NO\n";
    }

    
    return 0;
}
