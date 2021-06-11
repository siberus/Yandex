#include <unordered_map>
#include <iostream>
#include <string>

using namespace std;


int main() {
    unsigned numSynonymPairs;
    cin >> numSynonymPairs;
    
    string synonym_1, synonym_2;
    unordered_map<string, string> synonymDictionary;
    for (unsigned i = 0; i < numSynonymPairs; ++i) {
        cin >> synonym_1 >> synonym_2;
        synonymDictionary.emplace(make_pair(synonym_1, synonym_2));
        synonymDictionary.emplace(make_pair(synonym_2, synonym_1));
    }

    cin >> synonym_1;
    synonym_2 = synonymDictionary[synonym_1];
    cout << synonym_2 << endl;

    return EXIT_SUCCESS;
}