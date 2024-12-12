#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin >>t;
    while(t--){
        int n;cin >>n;
        vector<int>v(n);
        int minn;
        for(int i=0;i<n;i++){
            cin >> v[i];
            if(i==0) minn = v[0];
            else minn = minn&v[i];
        }
        cout << minn <<endl;
        
    }

    
    return 0;
}
