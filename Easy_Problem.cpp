#include <iostream>

using namespace std;

int countPairs(int n) {
    return n - 1;
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            cout << countPairs(n) << endl;
        }
    }
    return 0;
}
