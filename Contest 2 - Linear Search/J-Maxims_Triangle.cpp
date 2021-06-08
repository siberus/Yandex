#include <algorithm>
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <cmath>

using namespace std;


int main() {
    unsigned numNotes;
    double firstFrequency;
    cin >> numNotes >> firstFrequency;

    vector<pair<double, string>> frequencies(numNotes - 1);
    for (auto& [frequency, proximity] : frequencies) {
        cin >> frequency >> proximity;
    }

    double minFrequency = 30, maxFrequency = 4000,
           prevFrequency = firstFrequency, EPS = 1e-6;
    for (const auto& [frequency, proximity] : frequencies) {
        if (abs(frequency - prevFrequency) > EPS) {
            if ((proximity == "closer" && frequency < prevFrequency) ||
                (proximity == "further" && frequency > prevFrequency)) {
                maxFrequency = max(minFrequency, min((prevFrequency + frequency) / 2, maxFrequency));
            } else {
                minFrequency = min(maxFrequency, max((prevFrequency + frequency) / 2, minFrequency));
            }
        }
        prevFrequency = frequency;
    }
    cout << setprecision(7) << minFrequency << ' ' << maxFrequency << endl;

    return EXIT_SUCCESS;
}