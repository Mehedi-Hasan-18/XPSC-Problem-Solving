#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    map<string,bool>mp;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        if(mp[s]==false){
            cout<<"NO\n";
            mp[s]=true;
        }
        else{
            cout<<"YES\n";
        }

    }
    
    return 0;
}
