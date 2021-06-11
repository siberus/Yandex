#include <iostream>
#include <string>
#include <map>

using namespace std;


int main() {
    string word, script;
    unsigned numWordLetters, numScriptLetters;
    cin >> numWordLetters >> numScriptLetters >> word >> script;

    map<char, unsigned> wordLetterCounter;
    for (const char& letter : word) {
        ++wordLetterCounter[letter];
    }

    bool doesOccur;
    char curLetter;
    unsigned numOccurrences = 0;
    map<char, unsigned> tempWordLetterCounter;
    for (unsigned i = 0; i < numScriptLetters; ++i) {
        doesOccur = true;
        tempWordLetterCounter = wordLetterCounter;
        for (unsigned j = i; j < i + numWordLetters; ++j) {
            curLetter = script[j];
            if (tempWordLetterCounter[curLetter] > 0) {
                --tempWordLetterCounter[curLetter];
            } else {
                doesOccur = false;
                break;
            }
        }
        if (doesOccur) ++numOccurrences;
    }
    cout << numOccurrences << endl;
    
    return EXIT_SUCCESS;
}