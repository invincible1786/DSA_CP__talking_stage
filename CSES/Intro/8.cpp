#include <bits/stdc++.h>
using namespace std;

const long long mod = 1e9+7;

int main(){
    int n;
    cin >> n;
    long long ans = 1;
    while(n--) ans = ((ans%mod)*2)%mod;
    cout << ans;
}