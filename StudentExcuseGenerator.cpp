#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    string name;

    cout << "Enter student name: ";
    getline(cin, name);

    // Check empty input
    if (name.empty()) {
        cout << "Please enter a valid name." << endl;
        return 0;
    }

    // Excuse templates
    vector<string> excuses = {
        name + " couldn't complete the assignment because the laptop battery died unexpectedly.",
        name + " was about to submit the homework when the Wi-Fi suddenly stopped working.",
        name + " tried finishing the assignment, but the keyboard stopped cooperating.",
        "The file mysteriously disappeared just before " + name + " clicked submit.",
        name + " accidentally spent 3 hours watching coding tutorials instead of coding.",
        name + "'s computer decided to install updates at the worst possible time.",
        name + " completed the homework mentally but forgot to type it.",
        name + " was fully prepared until the internet vanished into another dimension.",
        name + " almost completed the assignment before the system crashed.",
        "A power cut interrupted " + name + "'s assignment submission at the final moment."
    };

    // Random generator
    srand(time(0));

    int randomIndex = rand() % excuses.size();

    cout << "\nGenerated Excuse:\n";
    cout << excuses[randomIndex] << endl;

    return 0;
}
