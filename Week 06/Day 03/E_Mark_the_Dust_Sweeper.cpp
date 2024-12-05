#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin >>t;
    while(t--){
        int n;cin >>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int x;cin >>x;
            v.push_back(x);
        }
        reverse(v.begin(),v.end());
        while(!v.empty() && v.back()==0) v.pop_back();
        if(v.empty()){
            cout << 0 <<endl;
            continue;
        }
        reverse(v.begin(),v.end());
        long long ans = 0;
        for(int i=0;i<v.size()-1;i++){
            if(v[i]==0) ans++;
            else ans += v[i];
        }
        cout << ans <<endl;
        
    }

    
    return 0;
}
