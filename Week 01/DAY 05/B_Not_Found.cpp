#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int n=s.size();
    map<char,bool>mp;
    for(int i=0;i<n;i++){
        mp[s[i]] = true;
    }
    bool flag = false;
    for(char i='a';i<='z';i++){
        if(mp.find(i)== mp.end()){
            cout << i;
            flag = true;
            break;
        }
    }
    if(flag != true) cout <<"None\n";
    return 0;
}
