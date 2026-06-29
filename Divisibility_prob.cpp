#include <iostream>

using namespace std;

long long get_min_moves(long long a, long long b) {
    if (a % b == 0) {
        return 0;
    }
    if (a < b) {
        long long next_divisible = b;
        return next_divisible - a;
    }
    long long next_divisible = ((a / b) + 1) * b;
    return next_divisible - a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            long long a, b;
            cin >> a >> b;
            cout << get_min_moves(a, b) << "\n";
        }
    }
    return 0;
}
