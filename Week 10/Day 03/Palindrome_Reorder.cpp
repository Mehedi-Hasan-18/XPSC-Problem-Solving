#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;cin >> s;
    map<char,int>mp;
    int n = s.size();
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    string half ="",middle="";
    for(auto val : mp){
        if(val.second%2 != 0){
            if(!middle.empty()){
                cout <<"NO SOLUTION\n";
                return 0;
            }
            middle +=val.first;
        }
        half += string(val.second/2,val.first);
    }
    cout << half+middle+string(half.rbegin(),half.rend());
    return 0;
}
