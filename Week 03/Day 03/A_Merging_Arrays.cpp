#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin >> n >> m;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);
    }
    vector<int>v1;
    for(int i=0;i<m;i++){
        int x;cin>>x;
        v1.push_back(x);
    }
    vector<int>ans;
    int i = 0; int j=0;
    while(i<n && j<m){
        ans.push_back(v[i]);
        ans.push_back(v1[j]);
        i++;j++;
    }
    while(i<n) {
        ans.push_back(v[i]);
        i++;
    }
    while(j<m) {
        ans.push_back(v1[j]);
        j++;
    }
    sort(ans.begin(),ans.end());
    for(auto val : ans) cout << val <<" ";
    

    
    return 0;
}
