#include <iostream>

using namespace std;

int main() {
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int h, m;
        cin >> h >> m;
        int total_minutes = (24 - h) * 60 - m;
        cout << total_minutes << "\n";
    }
    return 0;
}
