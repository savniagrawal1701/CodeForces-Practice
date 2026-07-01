#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string determineWinner(int n, const string& s) {
    int a_count = count(s.begin(), s.end(), 'A');
    int d_count = n - a_count;
    
    if (a_count > d_count) {
        return "Anton";
    } else if (d_count > a_count) {
        return "Danik";
    } else {
        return "Friendship";
    }
}

int main() {
    int n;
    string s;
    
    if (cin >> n >> s) {
        cout << determineWinner(n, s) << "\n";
    }
    
    return 0;
}
