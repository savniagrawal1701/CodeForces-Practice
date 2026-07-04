#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

void solve() {
    int t;
    if (!(std::cin >> t)) return;
    while (t--) {
        std::string s;
        std::cin >> s;
        std::transform(s.begin(), s.end(), s.begin(), ::tolower);
        if (s == "yes") {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}
