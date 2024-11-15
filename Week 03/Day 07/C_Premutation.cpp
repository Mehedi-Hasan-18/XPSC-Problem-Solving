#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin >>t;
    while(t--){
        int n;cin >> n;
        vector<int>v[n];
        for(int i =0;i<n;i++){
            for(int j=0;j<n-1;j++){
                int x;cin>>x;
                v[i].push_back(x);
            }
        }
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[v[i][0]]++;
        }
        vector<int>ans;
        for(auto val : mp){
            if(val.second != 1){
                ans.push_back(val.first);
            }

        }
        for(int i =0;i<n;i++){
            for(int j=0;j<n-1;j++){
                if(v[i][0] != ans[0]){
                    ans.push_back(v[i][j]);
                }
            }
        }
        for(auto val : ans){
            cout << val <<" ";
        }
        cout <<'\n';
        
    }

    
    return 0;
}


