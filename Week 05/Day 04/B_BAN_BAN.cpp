#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin >>t;
    while(t--){
        int n;cin >>n;
        int sz = 3*n;
        vector<pair<int,int>>ans;
        int l = 2,r=sz;
        while(r>l){
            ans.push_back({l,r});
            l+=3;
            r-=3;
        }
        cout << ans.size() << endl;
        for(auto val : ans){
            cout << val.first <<" "<< val.second<<endl;
        }
        
    }

    
    return 0;
}
