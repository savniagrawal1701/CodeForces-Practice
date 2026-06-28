#include <iostream>
using namespace std;

int percentage(int n, int num, int sum) {
    sum = sum + num;
    return sum;
}

int main() {
    int n;
    cin >> n;
    int size = n;
    int sum = 0;
    while (n != 0) {
        int num;
        cin >> num;
        sum = percentage(n, num, sum);
        n--;
    }
    cout << (double)sum / size;
    return 0;
}
