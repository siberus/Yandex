#include <unordered_set>
#include <iostream>

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
    cout << uniqueIntegers.size() << endl;

    return EXIT_SUCCESS;
}