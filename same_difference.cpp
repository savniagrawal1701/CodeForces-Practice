#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    for (int i = n - 2; i >= 0; i--) {
        if (s[i] != s[n-1]) {
            count++;
        }
    }
    cout << count << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
