// 2245/B

// n elements main se k lene hai - n-k nhi lene - toh k > n-k -> k >= n/2
// toh max(positive numbers, n/2) elements lene hai
 
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, c;
        long long ans = 0;
        cin >> n >> c;
        vector<long long> arr;
        long long cnt = 0;
        long long p = n;
        while(p--){
            long long x;
            cin >> x;
            if((x-c) > 0) cnt += 1;
            arr.push_back(x-c);

        }
        sort(arr.begin(),arr.end());
        long long k = max(cnt,((n+1)/2));
        long long i = n-1;
        while(k--){
            ans += arr[i];
            i--;
        }
        cout << ans << endl;
    }
}