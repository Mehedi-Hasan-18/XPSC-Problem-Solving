#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f_range for (int i = 0; i < n; i++)
#define f_reverse for (int i = n - 1; i >= 0; i--)
using namespace std;
int n = 100000;
vector<int>v;

void findPrime()
{
    vector<bool> prime(n + 1, true);
    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i])
        {
            for (int j = i + i; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }
    for(int i=0;i<=n;i++){
        if(prime[i]){
            v.push_back(i);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    findPrime();
    while (t--)
    {
        int d;
        cin >> d;
        int ans = 1,j = -1;
        for(int i=0;i<v.size();i++){
            if(v[i]-1>=d){
                ans *= v[i];
                j = v[i];
                break;
            }
        }
        for(int i=0;i<v.size();i++){
            if(v[i]-j>=d){
                ans *= v[i];
                j = v[i];
                break;
            }
        }
        cout << ans <<endl;
    }

    return 0;
}
