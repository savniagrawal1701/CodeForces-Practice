#include <iostream>
 
using namespace std;
 
int main() {
    int n, p, v, t, count = 0;
    // Read the number of problems
    if (!(cin >> n)) return 0;
    
    for (int i = 0; i < n; i++) {
        // Read views of Petya, Vasya, and Tonya
        cin >> p >> v >> t;
        // If at least two people are sure (sum >= 2), increment count
        if (p + v + t >= 2) {
            count++;
        }
    }
    
    // Output the total number of problems they can solve
    cout << count << endl;
    
    return 0;
}