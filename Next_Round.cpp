#include <iostream>
#include <vector>

using namespace std;


int count_advancers(int n, int k, const vector<int>& scores) {
    int target_score = scores[k - 1];
    int advancers = 0;

    for (int i = 0; i < n; ++i) {
        if (scores[i] >= target_score && scores[i] > 0) {
            advancers++;
        } else {
            break;
        }
    }
    return advancers;
}

int main() {
    int n, k;
    if (!(cin >> n >> k)) return 0;

    
    vector<int> scores(n);
    for (int i = 0; i < n; ++i) {
        cin >> scores[i];
    }

    
    int result = count_advancers(n, k, scores);

    cout << result << "\n";

    return 0;
}
