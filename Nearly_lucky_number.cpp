#include <iostream>

using namespace std;


string solve(long long n) {
    int lucky_count = 0;

    
    while (n > 0) {
        int last_digit = n % 10; 
        
        if (last_digit == 4 || last_digit == 7) {
            lucky_count++;
        }
        
        n /= 10; 
    }

    
    if (lucky_count == 4 || lucky_count == 7) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {

    long long n;
    cin >> n;

    cout << solve(n) << "\n";

    return 0;
}
