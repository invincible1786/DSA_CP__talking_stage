#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;

        string s = to_string(x);
        int d = s.size();

        long long y = 1;
        for (int i = 0; i < d; i++) {
            y *= 10;
        }

        cout << y + 1 << endl;
    }

    return 0;
}