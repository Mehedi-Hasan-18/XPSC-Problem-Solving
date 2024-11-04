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
        string s1;
        cin >> s1;
        string s2;
        cin >> s2;
        for(int i=0;i<n;i++){
            if(s1[i] == 'G') s1[i] = 'B';
            if(s2[i] == 'G') s2[i] = 'B';
        }
        bool flg = false;
        for(int i=0;i<n;i++){
            if(s1[i] != s2[i]){
                flg = true;
            }
        }
        if(flg) cout <<"NO\n";
        else cout <<"YES\n";
        

    }

    
    return 0;
}
