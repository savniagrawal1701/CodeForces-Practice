#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    // Fast integer arithmetic to find minimum animals
    cout << (n / 4) + (n % 4 / 2) << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
