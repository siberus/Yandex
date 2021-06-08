#include <unordered_set>
#include <iostream>

using namespace std;


int main() {
    int integer;
    unordered_set<int> uniqueIntegers;
    while (cin >> integer) {
        uniqueIntegers.emplace(integer);
    }
    unsigned numUniqueIntegers = uniqueIntegers.size();
    cout << numUniqueIntegers << endl;

    return EXIT_SUCCESS;
}