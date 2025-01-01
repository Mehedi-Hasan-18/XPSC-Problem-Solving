#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n ; cin>>n;
    int ar[n];
    for(int i=0; i<n; i++) cin>>ar[i];
    
    sort(ar,ar+n);
    int q; cin>>q;
    while(q--){
    int x; cin>>x;
    auto it = upper_bound(ar,ar+n,x);
    cout<<it-ar<<endl;
    }
}