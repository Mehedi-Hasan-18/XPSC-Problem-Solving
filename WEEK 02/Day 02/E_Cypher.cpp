#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            for(int j=0;j<x;j++){
                char c;
                cin >> c;
                if(c == 'D'){
                    if(v[i] == 9){
                        v[i] -= 9;
                    }
                    else{
                        v[i] += 1;
                    }
                    
                }
                else{
                    if(v[i] == 0){
                        v[i] += 9;
                    }
                    else{
                        v[i] -= 1;
                    }
                    
                }
            }
        }
        for(auto val : v){
            cout << val <<" ";
        }
        cout <<'\n';

    }

    
    return 0;
}
