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
        map<char,bool>mp;
        map<char,char>mp1;
        string s;
        cin >> s;
        vector<char>v;
        for(int i=0;i<n;i++){
            if(mp[s[i]]==false){
                mp[s[i]] = true;
            }
        }
        for(auto val:mp){
            v.push_back(val.first);
        }
        for(int i=0;i<v.size();i++){
            mp1[v[i]] = v[(v.size()-1)-i];
        }
        for(int i=0;i<s.size();i++){
            cout<<mp1[s[i]];
        }
        cout<<endl;
    }

    
    return 0;
}
