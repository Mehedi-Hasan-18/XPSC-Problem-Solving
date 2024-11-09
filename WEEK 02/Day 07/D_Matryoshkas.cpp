#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin >>t;
    while(t--){
        int n;cin>>n;
        vector<int>v(n);
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin >> v[i];
            mp[v[i]]++;
        }
        int last =0;int cnt =0;
        int ans =0;
        for(auto val : mp){
            if(val.first == last+1){
                if(cnt>=val.second){
                    cnt = val.second;
                    last = val.first;
                }
                else{
                    ans += (val.second-cnt);
                    cnt = val.second;
                    last = val.first;
                }
            }
            else {
                ans += val.second;
                last = val.first;
                cnt = val.second;
            }
        }
        cout << ans << endl;
    }
    

    
    return 0;
}
