#include <iostream>
#include <vector>

using namespace std;

int getMinBills(int n) {
    vector<int> bills = {1, 5, 10, 20, 100};
    int count = 0;
    
    for (int i = bills.size() - 1; i >= 0; --i) {
        count += n / bills[i];
        n %= bills[i];
    }
    
    return count;
}

int main() {
    int n;
    cin >> n;
    
    cout << getMinBills(n) << "\n";
    
    return 0;
}
