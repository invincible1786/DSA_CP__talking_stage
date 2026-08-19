#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n;
    cin >> n;

    if (n == 2 || n == 3) {
        cout << "NO SOLUTION\n";
        return 0;
    }

    if (n == 4) {
        cout << "2 4 1 3\n";
        return 0;
    }

    vector<int> a(n);
    int val = 1;

    for (int i = 0; i < n; i += 2) {
        a[i] = val++;
    }

    for (int i = 1; i < n; i += 2) {
        a[i] = val++;
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << (i + 1 == n ? '\n' : ' ');
    }

    return 0;
}