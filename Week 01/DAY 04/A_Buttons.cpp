#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    int ans = 0;
    for(int i=0;i<2;i++){
        if(a>b || a==b){
            ans += a;
            a = a-1;
        }
        else{
            ans += b;
            b = b-1;
        }
    }
    cout << ans << endl;

    
    return 0;
}
