#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int x = 0;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        // The middle character (index 1) is always '+' or '-'
        if (s[1] == '+') {
            x++;
        } else {
            x--;
        }
    }
    
    cout << x << endl;
    return 0;
}
