#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = stoi(s);
    int r = round(sqrt(n));
    if (r * r == n) {
        cout << 0 << " " << r << "\n";
    } else {
        cout << -1 << "\n";
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
