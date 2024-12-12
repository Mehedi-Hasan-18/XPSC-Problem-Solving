#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll t, n, s1, s2;
    
    cin>>t;
    
    for(;t--;)
    {
        cin>>n;
        
        ll a[n];
        
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        s1=s2=a[0];
        
        for(int i=1; i<n; i++){
            s1=s1|a[i];
            s2=s2&a[i];
        }
        
        cout<<s1-s2<<"\n";
    }
    
}