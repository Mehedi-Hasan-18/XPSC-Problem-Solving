#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin >>t;
    while(t--){
        int n;cin >>n;
        string s;
        cin >> s;
        int zero=0,ones=0;
        for(int i=0;i<n;i++){
            if(s[i] == '0') zero++;
            else ones++;
        }
        int min_count = min(zero,ones);
        if(min_count%2==0){
            cout <<"Ramos\n";
        }
        else{
            cout <<"Zlatan\n";
        }
        
    }

    
    return 0;
}
