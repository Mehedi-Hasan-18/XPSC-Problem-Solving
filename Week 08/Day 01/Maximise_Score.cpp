#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin >>t;
    while(t--){
        int n;cin >>n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        vector<int>diff(n-1);
        for(int i=0;i<n-1;i++){
            diff[i] = abs(v[i] - v[i+1]);
        }
        int ans = INT_MAX;
        if(n>=2){
            ans = min(ans,diff[0]);
        }
        if(n>=2){
            ans = min(ans,diff[n-2]);
        }
        for(int i=1;i<n-1;i++){
            int max_diff = max(diff[i],diff[i-1]);
            ans = min(ans,max_diff);
        }
        cout << ans <<endl;
        
    }
    return 0;
}

