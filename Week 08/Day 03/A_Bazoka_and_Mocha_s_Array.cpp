#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin >>t;
    while(t--){
        int n;cin >>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        bool srt = false;
        for(int i=0;i<n;i++){
           if(is_sorted(v.begin(),v.end())){
            srt = true;break;
           } 
           rotate(v.begin(),v.begin()+1,v.end());
        }
        if(srt) cout <<"Yes\n";
        else cout <<"No\n";
        
    }
 
    
    return 0;
}