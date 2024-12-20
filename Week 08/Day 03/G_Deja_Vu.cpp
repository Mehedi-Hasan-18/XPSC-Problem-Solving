#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin >>t;
    while(t--){
        int n,m;cin >>n>>m;
        vector<int>v(n),x;
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        int q;
        for(int i=0;i<m;i++){
            cin >> q;
            if(x.empty() || x.back()>q){
                x.push_back(q);
            }
        }
        for(int i=0;i<n;i++){
            for(auto val :x){
                if(v[i]%(1<<val)==0){
                    v[i] += (1<<(val-1));
                }
            }
            
        }
        for(auto val : v){
            cout << val <<" ";
        }
        cout <<endl;
    }

    
    return 0;
}
