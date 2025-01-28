#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f_range for (int i = 0; i < n; i++)
#define f_reverse for (int i = n - 1; i >= 0; i--)
using namespace std;

bool isC(char c) { return (c == 'b' || c == 'c' || c == 'd'); }
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
        string s;
        cin >> s;
        vector<string> ans;
        for (int i = 0; i < n; i++)
        {
            if (isC(s[i]) && (i + 1 < n && !isC(s[i + 1])))
            {
                string word = "";
                word.push_back(s[i]);
                word.push_back(s[i + 1]);
                ans.push_back(word);
                i++;
            }
            else
            {
                string word = ans.back();
                ans.pop_back();
                word.push_back(s[i]);
                ans.push_back(word);
            }
        }
        int len = ans.size();
        for (int i = 0; i < len; i++)
        {
            if (i != len - 1)
                cout << ans[i] << ".";
            else
                cout << ans[i];
        }
        cout << "\n";
    }

    return 0;
}
