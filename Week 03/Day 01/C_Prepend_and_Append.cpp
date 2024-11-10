#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n;cin >>n;
        string str;
        cin >> str;
        int left = 0;
        int right = n-1;
        int sz = n;
        while(left<=right){
            if((str[left] != str[right])){
                sz-=2;
                left++;
                right--;
            }
            else{
                break;
            }
        }
        cout <<sz<<endl;
    }

    
    return 0;
}
