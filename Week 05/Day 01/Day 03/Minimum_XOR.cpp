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
            int x;cin >> x;
            v.push_back(x);
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            ans = ans ^ v[i];
        }
        int min_ans = INT_MAX;
        for(int i=0;i<n;i++){
            int min_xor = ans^v[i];
            min_ans = min(min_ans,min_xor);
        }
        if(ans < min_ans) cout << ans <<endl;
        else cout << min_ans << endl;
        
        
    }

    
    return 0;
}
