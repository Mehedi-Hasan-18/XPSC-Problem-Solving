#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    
    while(t--){
        vector<int>v;
        int n;cin>>n;
        for(int i=0;i<n;i++){
            int x ;cin >>x;
            v.push_back(x);
        }
        int vis = 0;
        set<int>s;
        for(int i=n-1;i>=0;i--){
            s.insert(v[i]);
            vis++;
            if(vis>s.size()) break;
        }
        cout <<n-s.size()<<endl;
        
    }

    
    return 0;
}
