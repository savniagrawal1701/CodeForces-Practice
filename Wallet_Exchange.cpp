#include <iostream>
#include <string>

using namespace std;

// Solves a single test case
void solve() {
    int n, m;
    cin >> n >> m;
    
    int total = n + m;
    if (total % 2 == 0) {
        cout << "Bob\n";
    } else {
        cout << "Alice\n";
    }
}

int main() {
    // Optimizes standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t; // Reads the number of test cases
    while (t--) {
        solve();
    }
    
    return 0;
}
