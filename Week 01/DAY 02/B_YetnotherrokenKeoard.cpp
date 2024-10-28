#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        vector<char> capital;
        vector<char> small;
        vector<bool> flag(n+2,true);
        for(int i=0;i<n;i++){
            if(s[i]=='b'){
                if(!small.empty()){
                    flag[small.back()] = false;
                    small.pop_back();
                }
                flag[i] = false;
            }
            else if(s[i]=='B'){
                if(!capital.empty()){
                    flag[capital.back()] = false;
                    capital.pop_back();
                }
                flag[i] = false;
            }
            else {
                if(s[i]>='A' && s[i]<='Z'){
                    capital.push_back(i);
                }
                else{
                    small.push_back(i);
                }
            }
        }
        for(int i=0;i<n;i++){
            if(flag[i]){
                cout<<s[i];
            }
        }
        cout<<'\n';
    }
    
    return 0;
}