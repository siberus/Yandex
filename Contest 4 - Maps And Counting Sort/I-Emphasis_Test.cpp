#include <iostream>
#include <cctype>
#include <string>
#include <map>
#include <set>

using namespace std;


int main() {
    unsigned dictionarySize;
    cin >> dictionarySize;

    string word;
    map<string, set<string>> dictionary;
    for (unsigned i = 0; i < dictionarySize; ++i) {
        cin >> word;
        toupper(word);
    }

    unsigned numMistakes;
    

    return EXIT_SUCCESS;
}