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
        int n,m;cin >>n>>m;
        string a,b; cin >> a >> b;
        int i=0,j=0;
        while(i<n && j<m){
            if(a[i]==b[j]){
                i++;
                j++;
            }
            else j++;
        }
        cout << i << endl;
        
    }

    
    return 0;
}
