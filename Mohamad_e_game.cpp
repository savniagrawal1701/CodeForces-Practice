#include <bits/stdc++.h>

using namespace std;

string solve(long long n) {
    if (n % 2 == 0) {
        return "Mahmoud";
    }
    return "Ehab";
}

int main() {
    long long n;
    if (cin >> n) {
        cout << solve(n) << "\n";
    }

    return 0;
}