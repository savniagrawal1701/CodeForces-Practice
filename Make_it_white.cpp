#include <bits/stdc++.h>

using namespace std;

int solve(int n, const string& str) {
    int i = 0;
    int j = n - 1;

    while (i < j && (str[i] == 'W' || str[j] == 'W')) {
        if (str[i] == 'W') i++;
        if (str[j] == 'W') j--;
    }

    return j - i + 1;
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            string str;
            cin >> n >> str;
            cout << solve(n, str) << "\n";
        }
    }

    return 0;
}