#include <iostream>
#include <string>

using namespace std;

int countRemovals(int n, string s) {
    int removals = 0;
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            removals++;
        }
    }
    return removals;
}

int main() {
    int n;
    string s;
    if (cin >> n >> s) {
        cout << countRemovals(n, s) << endl;
    }
    return 0;
}
