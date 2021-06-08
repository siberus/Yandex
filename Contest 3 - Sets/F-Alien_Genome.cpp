#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
#include <string>
#include <set>

using namespace std;


int main() {
    string genome_1, genome_2;
    cin >> genome_1 >> genome_2;

    string basePair;
    multiset<string> basePairs_1;
    unsigned length_1 = genome_1.length();
    char prevLetter = genome_1.front(), curLetter;
    for (unsigned i = 1; i < length_1; ++i) {
        curLetter = genome_1[i];
        basePair = {prevLetter, curLetter};
        basePairs_1.emplace(basePair);
        prevLetter = curLetter;
    }

    set<string> basePairs_2;
    prevLetter = genome_2.front();
    unsigned length_2 = genome_2.length();
    for (unsigned j = 1; j < length_2; ++j) {
        curLetter = genome_2[j];
        basePair = {prevLetter, curLetter};
        basePairs_2.emplace(basePair);
        prevLetter = curLetter;
    }

    vector<string> commonBasePairs;
    unsigned numCommonBasePairs = 0;
    ranges::set_intersection(basePairs_1, basePairs_2, back_inserter(commonBasePairs));
    for (const string& basePair : commonBasePairs) {
        numCommonBasePairs += basePairs_1.count(basePair);
    }
    cout << numCommonBasePairs << endl;

    return EXIT_SUCCESS;
}