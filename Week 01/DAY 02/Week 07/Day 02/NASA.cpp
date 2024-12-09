#include <bits/stdc++.h>
using namespace std;
const int maxN = 1<<15;
vector<int>allPalindromes;
bool isPalindrom(int x){
    string s = to_string(x),t;
    t = s;
    reverse(t.begin(),t.end());
    if(s==t) return true;
    else return false;
}

void allPalindrom(){
    for(int i=0;i<maxN;i++){
        if(isPalindrom(i)){
            allPalindromes.push_back(i);
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    allPalindrom();
    int t;cin >>t;
    while(t--){
        int n;cin >>n;
        vector<int>v(n+1),cnt(maxN+1);
        for(int i=0;i<n;i++){
            cin >> v[i];
            cnt[v[i]]++;
        }

        long long ans = n;
        for(int i=0;i<n;i++){
            for(int j=0;j<allPalindromes.size();j++){
                int curr = (v[i]^allPalindromes[j]);
                ans += cnt[curr];
            }
        }
        cout << ans/2 <<'\n';
        
    }

    
    return 0;
}
