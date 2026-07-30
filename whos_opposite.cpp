#include <iostream>
#include <cmath>

using namespace std;


int get_opposite(int a, int b, int c) {
    
    int half = abs(a - b);
    int n = 2 * half;
    
    
    if (a > n || b > n || c > n) {
        return -1;
    }
    
    
    if (c <= half) {
        return c + half;
    } else {
        return c - half;
    }
}

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        
        
        cout << get_opposite(a, b, c) << "\n";
    }
    
    return 0;
}
