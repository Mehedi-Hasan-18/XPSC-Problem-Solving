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
        int zero = 0,one = 0,greater = 0;
        for(int i=0;i<n;i++){
            if(v[i]==0) zero++;
            if(v[i]==1) one++;
            if(v[i]>1){
                greater = 1;
            }
        }
        int non_zero = n-zero;
        if(zero > non_zero+1){
            if(one == 0){
                cout << 1 <<endl;
            }
            else{
                if(greater){
                    cout << 1 <<endl;
                }
                else cout << 2 <<endl;
            }
        }
        else {
            cout<<0<<endl;
        }
        
    }

    
    return 0;
}
