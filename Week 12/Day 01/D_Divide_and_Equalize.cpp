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
        vector<int>v(n);
        for(int i=0;i<n;i++) cin >> v[i];

        map<int,int>count;
        for(int i=0;i<n;i++){
            for(int j=2;j*j<=v[i];j++){
                while(v[i]%j==0){
                    count[j]++;
                    v[i]/=j;
                }
            }

            if(v[i]>1) count[v[i]]++;
        }  

        bool ok = true;
        for(auto val : count){
            if(val.second%n != 0){
                ok = false;
                break;
            }
        }  
        if(ok) cout << "YES\n";
        else cout <<"NO\n";    
    }

    
    return 0;
}
