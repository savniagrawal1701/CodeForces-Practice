#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, a, b;
    cin >> n >> m >> a >> b;

    
    if (m * a <= b) {
        cout << n * a << "\n";
    } 
    
    else {
        
        int opt1 = (n / m) * b + (n % m) * a;
        
        
        int opt2 = ((n / m) + 1) * b;
        
        cout << min(opt1, opt2) << "\n";
    }

    return 0;
}
