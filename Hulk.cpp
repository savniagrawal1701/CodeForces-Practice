#include <iostream>
#include <string>

using namespace std;


string solve(int n) {
    string result = "";
    
    for (int i = 1; i <= n; ++i) {
        if (i % 2 != 0) {
            result += "I hate";
        } else {
            result += "I love";
        }
        
        if (i == n) {
            result += " it";
        } else {
            result += " that ";
        }
    }
    
    return result;
}

int main() {
    
    int n;
    if (cin >> n) {
        
        cout << solve(n) << endl;
    }
    
    return 0;
}
