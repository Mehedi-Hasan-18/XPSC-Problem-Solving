#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f_range for(int i=0;i<n;i++)
#define f_reverse for(int i=n-1;i>=0;i--)
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin >>t;
    while(t--){
        int n;cin >>n;
        string s;
        cin >> s;
        int A = 0,B=0,C=0,D=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A') A++;
            if(s[i]=='B') B++;
            if(s[i]=='C') C++;
            if(s[i]=='D') D++;
        }
        int ans = 0;
        if(A>n) ans+= n;
        else ans += A;
        if(B>n) ans+= n;
        else ans += B;
        if(C>n) ans+= n;
        else ans += C;
        if(D>n) ans+= n;
        else ans += D;
        cout << ans <<endl;
        
    }

    
    return 0;
}
