#include <iostream>
#include <vector>

using namespace std;


int count_advancers(int n, int k, vector<int>& scores) {
    int t = scores[k - 1];
    int adv = 0;

    for (int i = 0; i < n; ++i) {
        if (scores[i] >= t && scores[i] > 0) {
            adv++;
        } else {
            break;
        }
    }
    return adv;
}

int main() {
    int n, k;
    if (!(cin >> n >> k)) return 0;

    
    vector<int> scores(n);
    for (int i = 0; i < n; ++i) {
        cin >> scores[i];
    }

    
    int res = count_advancers(n, k, scores);

    cout << res << endl;

    return 0;
}
