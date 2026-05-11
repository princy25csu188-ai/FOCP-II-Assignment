#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<long long> c(n);
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    long long ans = LLONG_MAX;
    int step = 2 * k + 1;

    for (int start = 0; start <= k; start++) {
        long long sum = 0;
        int pos = start;
        int last = -1;

        while (pos < n) {
            sum += c[pos];
            last = pos + k;
            pos += step;
        }

        if (last >= n - 1) {
            if (sum < ans) {
                ans = sum;
            }
        }
    }

    cout << ans << endl;
    return 0;
}
