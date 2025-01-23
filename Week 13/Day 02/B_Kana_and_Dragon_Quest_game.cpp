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
        int n,m,h;cin >>h>>n>>m;
        bool flag = false;
        while(h>20 && n>0){
            h = h/2+10;
            n--;
        }
        while(h>0 && m>0){
            h = h-10;
            m--;
            if(h<=0){
                flag = true;
                break;
            }
        }
        if(flag) cout << "YES\n";
        else cout <<"NO\n";

        
    }

    
    return 0;
}
