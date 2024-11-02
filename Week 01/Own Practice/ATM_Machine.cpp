#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int>v(n);
        for(int i=1;i<=n;i++){
            cin >> v[i];
        }
        for(int i=1;i<=n;i++){
            if(v[i]<=k){
                cout <<"1";
                k = k-v[i];
            }
            else{
                cout << "0";
            }
        }
        cout << endl;
    }

    
    return 0;
}
