#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> a(n - 1);
    for (int i = 0; i < n - 1; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < n - 1; ++i) {
        if (a[i] != i + 1) {
            cout << i + 1 << "\n";
            return 0;
        }
    }

    cout << n << "\n";

    return 0;
}

// O(n)

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    long long total_sum = n * (n + 1) / 2;
    for (int i = 0; i < n - 1; ++i) {
        long long val;
        cin >> val;
        total_sum -= val;
    }

    cout << total_sum << "\n";
    return 0;
}