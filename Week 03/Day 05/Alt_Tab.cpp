#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    stack<string>sp;
    for(int i=0;i<n;i++){
        string s ;cin >>s;
        sp.push(s);
    }
    set<string>ans;
    while(!sp.empty()){
        if(ans.find(sp.top())==ans.end()){
            ans.insert(sp.top());
            string str = sp.top();
            if(str.size() >2){
                cout <<str.substr(str.size() -2);
            }
        }
        sp.pop();
    }
    
    
    return 0;
}
