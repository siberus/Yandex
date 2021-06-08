#include <unordered_set>
#include <iostream>

using namespace std;


struct Tortoise {
    int front, back;
};

int main() {
    int numTortoises;
    cin >> numTortoises;

    Tortoise tortoise;
    unordered_set<Tortoise> tortoises;
    int tortoiseCountdown = numTortoises + 1, numTruthTellingTortoises = 0;
    while (--tortoiseCountdown) {
        cin >> tortoise.front >> tortoise.back;
        if ((tortoise.front >= 0 && tortoise.back >= 0) &&
            (tortoise.front + tortoise.back + 1 == numTortoises) &&
            (tortoises.contains(tortoise) == false)) {
            tortoises.emplace(tortoise);
            ++numTruthTellingTortoises;
        }
    }
    cout << numTruthTellingTortoises << endl;

    return EXIT_SUCCESS;
}