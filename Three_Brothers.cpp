#include <bits/stdc++.h>

using namespace std;

int solve(int a, int b) {
    return 6 - a - b;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << solve(a, b) << "\n";
    return 0;
}