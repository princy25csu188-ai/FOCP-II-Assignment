#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int count[32] = {0};  
        for (int i = 0; i < n; i++) {
            int x = a[i];
            int msb = 0;

            while (x > 0) {
                msb++;
                x = x / 2;
            }

            count[msb]++;
        }

        long long total = (long long)n * (n - 1) / 2;

        for (int i = 0; i < 32; i++) {
            long long c = count[i];
            total -= (c * (c - 1)) / 2;
        }

        cout << total << endl;
    }

    return 0;
}
