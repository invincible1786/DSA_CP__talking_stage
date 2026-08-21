#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n % 4 != 0 && n % 4 != 3) {
        cout << "NO\n";
        return 0;
    }

    cout << "YES\n";

    long long totalSum = n * (n + 1) / 2;
    long long target = totalSum / 2;

    vector<long long> set1, set2;

    for (long long i = n; i >= 1; i--) {
        if (i <= target) {
            set1.push_back(i);
            target -= i;
        } 
        else {
            set2.push_back(i);
        }
    }

    cout << set1.size() << "\n";
    for (long long x : set1)
        cout << x << " ";
    cout << "\n";

    cout << set2.size() << "\n";
    for (long long x : set2)
        cout << x << " ";

    return 0;
}