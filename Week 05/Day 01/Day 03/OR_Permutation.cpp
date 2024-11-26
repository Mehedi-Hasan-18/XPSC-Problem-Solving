#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin >>t;
    while(t--){
        int n;cin >>n;
        vector<int>v;
        for(int i=1;i<=n;i++) v.push_back(i);
        for(int i=2;i<=n-1;i++){
            if(v[i] == (v[i-1] | v[i-2])){
                swap(v[i],v[i-1]);
            }
        }
        for(auto val : v){
            cout << val <<" ";
        }
        cout << endl;
    }

    
    return 0;
}
