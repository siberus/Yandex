#include <unordered_set>
#include <iostream>
#include <sstream>
#include <string>
#include <set>

using namespace std;


int main() {
    int integer;
    unordered_set<int> uniqueIntegers;
    while (cin >> integer) {
        uniqueIntegers.emplace(integer);
        char c = cin.get();
        if (c == '\n')
            break;
    }
    set<int> orderedIntersection;
    while (cin >> integer) {
        if (uniqueIntegers.count(integer))
            orderedIntersection.emplace(integer);
        char c = cin.get();
        if (c == '\n')
            break;
    }

    for (const int& integer : orderedIntersection) {
        cout << integer << ' ';
    }
    cout << endl;

    return EXIT_SUCCESS;
}