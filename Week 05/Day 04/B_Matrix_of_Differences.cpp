#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin >>t;
    while(t--){
        int n;cin >>n;
        int large = n*n;
        int small = 1;
        int cnt = 1;
        int a[n+1][n+1];
        for(int i=1;i<=n;i++){
            if(i%2==1){
                for(int j=1;j<=n;j++){
                    if(cnt%2==1){
                        a[i][j] = small;
                        small++;
                    }
                    else{
                        a[i][j] = large;
                        large--;
                    }
                    cnt++;
                }
                
            }
            else{
                for(int j=n;j>=1;j--){
                    if(cnt%2==1){
                        a[i][j] = small;
                        small++;
                    }
                    else{
                        a[i][j] = large;
                        large--;
                    }
                    cnt++;
                }
                
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cout << a[i][j]<<" ";
            }
            cout << endl;
        }
        
    }

    
    return 0;
}
