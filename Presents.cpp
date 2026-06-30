#include <iostream>
#include <vector>

using namespace std;

void solvePresents0Based(int n) {
    vector<int> a(n);
    vector<int> ans(n);

    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    
    for (int i = 0; i < n; ++i) {
        ans[a[i] - 1] = i + 1;
    }

    
    for (int i = 0; i < n; ++i) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    if (cin >> n) {
        solvePresents0Based(n);
    }
    return 0;
}
