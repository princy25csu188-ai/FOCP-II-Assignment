#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int count = 0;

        while (n > 0) {
            if (n % 2 == 1) {
                count++;
            }
            n = n / 2;
        }

        if (count % 2 == 0) {
            cout << "EVEN\n";
        } else {
            cout << "ODD\n";
        }
    }

    return 0;
}
