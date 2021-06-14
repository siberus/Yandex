// Unsolved

// #include <unordered_map>
// #include <iostream>
// #include <string>

// using namespace std;


// int main() {
//     string word, script;
//     unsigned numWordLetters, numScriptLetters;
//     cin >> numWordLetters >> numScriptLetters >> word >> script;

//     unordered_map<char, unsigned> wordLetterCounter;
//     for (const char& letter : word) {
//         ++wordLetterCounter[letter];
//     }

//     char letterToFind;
//     unsigned minCount = UINT32_MAX;
//     for (const auto& [letter, count] : wordLetterCounter) {
//         if (count < minCount) {
//             minCount = count;
//             letterToFind = letter;
//         }
//     }

//     char curLetter;
//     bool doesOccur, isFirstOccurrance = true;
//     unsigned left, right, numOccurrences = 0;
//     unordered_map<char, unsigned> tempWordLetterCounter;
//     for (size_t pos = script.find(letterToFind); pos != string::npos; pos = script.find(letterToFind, pos + numWordLetters)) {
//         if (isFirstOccurrance) {
//             if (pos < numWordLetters) {
//                 left = 0;
//                 right = numWordLetters;
//             } else {
//                 left = pos - numWordLetters + 1;
//                 right = pos + 1;
//             }
//             isFirstOccurrance = false;
//         } else {
//             left = pos;
//             right = pos + numWordLetters;
//         }
//         while (left <= pos && right <= numScriptLetters) {
//             doesOccur = true;
//             tempWordLetterCounter = wordLetterCounter;
//             for (unsigned cur = left; cur < right; ++cur) {
//                 curLetter = script[cur];
//                 if (tempWordLetterCounter[curLetter] > 0) {
//                     --tempWordLetterCounter[curLetter];
//                 } else {
//                     doesOccur = false;
//                     break;
//                 }
//             }
//             if (doesOccur) ++numOccurrences;
//             ++left;
//             ++right;
//         }
//     }
//     cout << numOccurrences << endl;
    
//     return EXIT_SUCCESS;
// }