#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    // Check for empty input
    if (name.empty()) {
        cout << "Please enter a valid name." << endl;
        return 0;
    }

    // Roast templates
    vector<string> roasts = {
        name + " writes code so slowly that even a turtle switched to Python.",
        "If procrastination were an Olympic sport, " + name + " would already have gold.",
        name + "'s debugging style is basically staring at the screen until the bug leaves.",
        name + " opens VS Code just to admire the dark theme.",
        "Even the compiler gets confused after seeing " + name + "'s code.",
        name + "'s code has more twists than a Bollywood movie.",
        "If copy-paste was a talent, " + name + " would be world champion.",
        name + " once fixed a bug by deleting the whole project.",
        "The Wi-Fi disconnects itself after seeing " + name + "'s search history.",
        name + "'s typing speed is slower than Internet Explorer."
    };

    // Random generator
    srand(time(0));

    int randomIndex = rand() % roasts.size();

    cout << "\nGenerated Roast:\n";
    cout << roasts[randomIndex] << endl;

    return 0;
}
