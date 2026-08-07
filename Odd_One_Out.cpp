#include <iostream>
using namespace std;
int findOddOne(int a, int b, int c) {
    return a ^ b ^ c;
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int a, b, c;
            cin >> a >> b >> c;
            cout << findOddOne(a, b, c) << "\n";
        }
    }
    return 0;
}
