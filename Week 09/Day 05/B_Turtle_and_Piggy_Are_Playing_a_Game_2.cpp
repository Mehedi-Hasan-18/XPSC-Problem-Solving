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
        vi v(n);
        f_range cin >> v[i];
        sort(v.begin(),v.end());
        cout << v[n/2]<<endl;
        
    }

    
    return 0;
}
