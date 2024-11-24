#include <bits/stdc++.h>
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
        vector<int> v(n);

        string str = "abcdefghijklmnopqrstuvwxyz";
        map<char, int> mp;
        for (int i = 0; i < str.size(); i++)
        {
            mp[str[i]] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            for (auto val : mp)
            {
                if (val.second == v[i]){
                    cout << val.first;
                    mp[val.first] ++;
                    break;
                }
            }
        }
        cout << endl;
    }

    return 0;
}
