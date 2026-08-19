#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int ans = 0;
    int cnt = 1;
    char curr = s[0];
    for(int i=1; i<s.size(); i++){
        if(s[i] == curr){
            cnt += 1;
        }
        else{
            ans = max(cnt,ans);
            cnt = 1;
            curr = s[i];
        }
    }
    ans = max(ans,cnt);
    cout << ans;
}