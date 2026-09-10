#include <iostream>

using namespace std;

bool solve(int p, int q) {
    return (q - p >= 2);
}

int main() {
    int n;
    if (cin >> n) {
        int count = 0;
        while (n--) {
            int p, q;
            cin >> p >> q;
            if (solve(p, q)) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
