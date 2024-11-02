#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
        bool f = false;
	    for(int i=0;i<s.size() && !f;i++){
	        if(!isVowel(s[i])){
                int ans = 1;
                for(int j=i+1;j<s.size() && j<i+4;j++){
                    if(!isVowel(s[j])){
                        ans++;
                    }
                }
                if(ans>=4){
                    f = true;
                }
	        }
	    }
        if(f) cout << "NO\n";
        else cout<<"YES\n";
	}
    return 0;
}
