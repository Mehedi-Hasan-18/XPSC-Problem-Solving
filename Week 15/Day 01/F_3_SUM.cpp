#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f_range for (int i = 0; i < n; i++)
#define f_reverse for (int i = n - 1; i >= 0; i--)
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
        vi a(n);
        for(int i = 0;i<n;i++) cin >> a[i];

        int freq[11];
        memset(freq,0,sizeof(freq));
        vi e;
        for(int i = 0;i<n;i++)
        {
            if (freq[(a[i] % 10)] == 0)
                e.push_back((a[i] % 10));
            freq[(a[i] % 10)]++;
        }

        n = e.size();

        bool ok = false;

        if (freq[1] >= 3)
            ok = true;

        for(int i = 0;i<n;i++)
        {
            if (freq[e[i]] >= 2)
            {
                for(int j = 0;j<n;j++)
                {
                    if (e[j] == e[i])
                        continue;
                    if (((2 * e[i]) + e[j]) % 10 == 3)
                    {
                        ok = true;
                    }
                }
            }
        }

        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                for(int k = 0;k<n;k++){
                    if (i != j and j != k and k != i and (e[i] + e[j] + e[k]) % 10 == 3){
                        ok = true;
                    }
                }
            }
        }

        if(ok) cout <<"YES\n";
        else cout <<"NO\n";
    }

return 0;
}
