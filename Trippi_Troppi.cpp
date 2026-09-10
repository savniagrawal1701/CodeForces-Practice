#include <iostream>
#include <string>

using namespace std;

void solve() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    cout << s1[0] << s2[0] << s3[0] << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
