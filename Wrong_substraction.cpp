#include <iostream>

using namespace std;

int solveWrongSubtraction(int n, int k) {
    for (int i = 0; i < k; ++i) {
        if (n % 10 == 0) {
            n /= 10;
        } else {
            n -= 1;
        }
    }
    return n;
}

int main() {
   
    int n, k;
    if (cin >> n >> k) {
        cout << solveWrongSubtraction(n, k) << "\n";
    }
    return 0;
}
