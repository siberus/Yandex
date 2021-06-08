#include <unordered_set>
#include <iostream>

using namespace std;


struct AngryBird {
    unsigned x, y;
};

int main() {
    unsigned numAngryBirds;
    cin >> numAngryBirds;

    AngryBird angryBird;
    unsigned minNumShots;
    unordered_set<unsigned> angryBirdsXCoordinates;
    for (unsigned i = 0; i < numAngryBirds; ++i) {
        cin >> angryBird.x >> angryBird.y;
        angryBirdsXCoordinates.emplace(angryBird.x);
    }
    minNumShots = angryBirdsXCoordinates.size();
    cout << minNumShots << endl;

    return EXIT_SUCCESS;
}