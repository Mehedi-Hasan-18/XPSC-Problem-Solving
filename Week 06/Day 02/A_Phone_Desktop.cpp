#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin >>t;
    while(t--){
        int n,m;cin >>n>>m;
        int cnt = 0;
        while(n>0 || m>0){
            if(m>=2){
                m-=2;
                n-=7;
                cnt++;
            }
            else if(m==1){
                m-=1;
                n-=11;
                cnt++;
            }
            else {
                n-=15;
                cnt++;
            }
        }
        cout << cnt << endl;
        
    }

    
    return 0;
}
