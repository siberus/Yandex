#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
#include <set>

using namespace std;


int main() {
    unsigned numAnyasCubes, numBoryasCubes;
    cin >> numAnyasCubes >> numBoryasCubes;

    unsigned colour;

    set<unsigned> AnyasColours;
    for (unsigned i = 0; i < numAnyasCubes; ++i) {
        cin >> colour;
        AnyasColours.emplace(colour);
    }

    set<unsigned> BoryasColours;
    for (unsigned j = 0; j < numBoryasCubes; ++j) {
        cin >> colour;
        BoryasColours.emplace(colour);
    }

    vector<unsigned> orderedIntersection;
    if (numAnyasCubes > 0 && numBoryasCubes > 0) {
        ranges::set_intersection(AnyasColours, BoryasColours, back_inserter(orderedIntersection));
        cout << orderedIntersection.size() << endl;
        for (const unsigned& colour : orderedIntersection) {
            cout << colour << ' ';
        }
    } else {
        cout << numAnyasCubes << endl;
    }
    cout << endl;

    if (numAnyasCubes > 0) {
        vector<unsigned> AnyasUniqueColours;
        ranges::set_difference(AnyasColours, orderedIntersection, back_inserter(AnyasUniqueColours));
        cout << AnyasUniqueColours.size() << endl;
        for (const unsigned& colour : AnyasUniqueColours) {
            cout << colour << ' ';
        }
    } else {
        cout << numAnyasCubes << endl;
    }
    cout << endl;

    if (numBoryasCubes > 0) {
        vector<unsigned> BoryasUniqueColours;
        ranges::set_difference(BoryasColours, orderedIntersection, back_inserter(BoryasUniqueColours));
        cout << BoryasUniqueColours.size() << endl;
        for (const unsigned& colour : BoryasUniqueColours) {
            cout << colour << ' ';
        }
    } else {
        cout << numBoryasCubes << endl;
    }
    cout << endl;

    return EXIT_SUCCESS;
}