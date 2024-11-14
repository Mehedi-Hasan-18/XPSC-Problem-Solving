#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        string s,r;
        cin >> s >> r;
        int n = s.size();
        int m = r.size();
        if(s[n-1] == 'S' && r[m-1] == 'M'){
            cout <<"<\n";
        }
        else if(s[n-1] == 'S' && r[m-1] == 'L'){
            cout <<"<\n";
        }
        else if(s[n-1] == 'M' && r[m-1] == 'S'){
            cout <<">\n";
        }
        else if(s[n-1] == 'L' && r[m-1] == 'S'){
            cout <<">\n";
        }
        else if(s[n-1] == 'M' && r[m-1] == 'L'){
            cout <<"<\n";
        }
        else if(s[n-1] == 'L' && r[m-1] == 'M'){
            cout <<">\n";
        }
        else if(s[n-1] == 'S' && r[m-1] == 'S'){
            if(n>m) cout <<"<\n";
            else if(m>n) cout <<">\n";
            else cout <<"=\n";
        }
        else if(s[n-1] == 'L' && r[m-1] == 'L'){
            if(n>m) cout <<">\n";
            else if(m>n) cout <<"<\n";
            else cout <<"=\n";
        }
        else if(s[n-1] == 'M' && r[m-1] == 'M'){
            cout <<"=\n";
        }
    }

    
    return 0;
}
