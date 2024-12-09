#include <bits/stdc++.h>
const int B = 30;
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin >>t;
    while(t--){
        int n,k;cin >>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        vector<int>bits(B+1);
        for(int i=0;i<n;i++){
            for(int j=B;j>=0;j--){
                if((v[i]>>j)&1){
                    bits[j]++;
                }
            }
        }
        int ans = 0;
        for(int i=B;i>=0;i--){
            if(bits[i]==n){
                ans+= 1LL<<i;
            }
            else{
                int need = n-bits[i];
                if(k>=need){
                    ans+= 1LL<<i;
                    k-= need;
                }
            }
        }
        cout << ans <<endl;
        
    }
 
    
    return 0;
}