#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >>t;
    while(t--){
        int dragon_total = 0;
        int sloth_total = 0;
        vector<int>dragon;
        vector<int>sloth;
        for(int i=0;i<3;i++){
            int x;cin>>x;
            dragon_total+=x;
            dragon.push_back(x);
        }
        for(int i=0;i<3;i++){
            int x;cin>>x;
            sloth_total+=x;
            sloth.push_back(x);
        }
        if(sloth_total==dragon_total){
            if(dragon[0] == sloth[0]){
                if(dragon[1] == sloth[1]){
                    cout <<"TIE\n";
                }
                else if(dragon[1]> sloth[1]) cout <<"DRAGON\n";
                else cout <<"SLOTH\n";
            }
            else if(dragon[0] > sloth[0]) cout <<"DRAGON\n";
            else cout <<"SLOTH\n";
        }
        else if(sloth_total>dragon_total) cout <<"SLOTH\n";
        else cout <<"DRAGON\n";
    }

    
    return 0;
}
