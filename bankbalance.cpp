#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Bank {
private:
    unordered_map<int, int> balance;

public:

    // CREATE X Y
    bool CREATE(int X, int Y) {

        // User already exists
        if (balance.find(X) != balance.end()) {
            balance[X] += Y;
            return false;
        }

        // Create new user
        balance[X] = Y;
        return true;
    }

    // DEBIT X Y
    bool DEBIT(int X, int Y) {

        // User not present or insufficient balance
        if (balance.find(X) == balance.end() || balance[X] < Y)
            return false;

        balance[X] -= Y;
        return true;
    }

    // CREDIT X Y
    bool CREDIT(int X, int Y) {

        // User not present
        if (balance.find(X) == balance.end())
            return false;

        balance[X] += Y;
        return true;
    }

    // BALANCE X
    int BALANCE(int X) {

        // User not present
        if (balance.find(X) == balance.end())
            return -1;

        return balance[X];
    }
};

int main() {

    int Q;
    cin >> Q;

    Bank bank;

    while (Q--) {

        string query;
        cin >> query;

        if (query == "CREATE") {

            int X, Y;
            cin >> X >> Y;

            cout << (bank.CREATE(X, Y) ? "true" : "false") << endl;
        }

        else if (query == "DEBIT") {

            int X, Y;
            cin >> X >> Y;

            cout << (bank.DEBIT(X, Y) ? "true" : "false") << endl;
        }

        else if (query == "CREDIT") {

            int X, Y;
            cin >> X >> Y;

            cout << (bank.CREDIT(X, Y) ? "true" : "false") << endl;
        }

        else if (query == "BALANCE") {

            int X;
            cin >> X;

            cout << bank.BALANCE(X) << endl;
        }
    }

    return 0;
}
