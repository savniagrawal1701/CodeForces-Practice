#include <iostream>

using namespace std;


long long function(long long n) {
    if (n % 2 == 0) {
        return n / 2;
    } else {
        return -(n + 1) / 2;
    }
}

int main() {
 
    long long n;
    if (cin >> n) {
        cout << function(n) << "\n";
    }
    
    return 0;
}
