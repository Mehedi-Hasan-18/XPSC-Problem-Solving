#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll ans = 0;
        for(ll i=30;i>=0;i--){
            ll cnt = 0;
            for(ll j=0;j<n;j++){
                if(a[j]>=(1<<i) && a[j]<(1<<(i+1)))
                    ++cnt;
            }
            ans+= (cnt*(cnt-1))/2;
        }
        cout<<ans<<endl;
    }

    return 0;
}
