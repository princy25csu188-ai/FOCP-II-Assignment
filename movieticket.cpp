#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <string>
using namespace std;

class MovieTicket {
private:
    unordered_map<int, unordered_set<int>> bookedUsers;
    unordered_map<int, int> bookedCount;

public:

    bool BOOK(int userId, int movieId) {

        // Movie sold out
        if (bookedCount[movieId] >= 100)
            return false;

        // User already booked
        if (bookedUsers[movieId].count(userId))
            return false;

        bookedUsers[movieId].insert(userId);
        bookedCount[movieId]++;

        return true;
    }

    bool CANCEL(int userId, int movieId) {

        // User has not booked
        if (!bookedUsers[movieId].count(userId))
            return false;

        bookedUsers[movieId].erase(userId);
        bookedCount[movieId]--;

        return true;
    }

    bool IS_BOOKED(int userId, int movieId) {

        return bookedUsers[movieId].count(userId);
    }

    int AVAILABLE_TICKETS(int movieId) {

        return 100 - bookedCount[movieId];
    }
};

int main() {

    int Q;
    cin >> Q;

    MovieTicket mt;

    while (Q--) {

        string query;
        cin >> query;

        if (query == "BOOK") {

            int X, Y;
            cin >> X >> Y;

            cout << (mt.BOOK(X, Y) ? "true" : "false") << endl;
        }

        else if (query == "CANCEL") {

            int X, Y;
            cin >> X >> Y;

            cout << (mt.CANCEL(X, Y) ? "true" : "false") << endl;
        }

        else if (query == "IS_BOOKED") {

            int X, Y;
            cin >> X >> Y;

            cout << (mt.IS_BOOKED(X, Y) ? "true" : "false") << endl;
        }

        else if (query == "AVAILABLE_TICKETS") {

            int Y;
            cin >> Y;

            cout << mt.AVAILABLE_TICKETS(Y) << endl;
        }
    }

    return 0;
}
