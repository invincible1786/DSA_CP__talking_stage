#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    n -= 1;
    long long curr;
    cin >> curr;
    long long ans = 0;
    while(n--){
        long long x;
        cin >> x;
        if(x < curr){
            ans += curr-x;
        }  
        else{
            curr = x;
        }
    }
     cout << ans;
}