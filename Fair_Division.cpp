#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int c1 = 0, c2 = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x == 1) {
            c1++;
        } else {
            c2++;
        }
    }
    int total = c1 + 2 * c2;
    if (total % 2 != 0) {
        cout << "NO\n";
        return;
    }
    int half = total / 2;
    if (half % 2 == 0) {
        cout << "YES\n";
    } else {
        if (c1 >= 2) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
