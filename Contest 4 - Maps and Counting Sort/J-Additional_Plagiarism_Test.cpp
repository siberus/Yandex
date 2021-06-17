// Unsolved

// #include <unordered_map>
// #include <unordered_set>
// #include <iostream>
// #include <cctype>
// #include <string>

// using namespace std;


// void MakeLowercase(string& potentialIdentifier) {
//     for (char& symbol : potentialIdentifier) {
//         symbol = tolower(symbol);
//     }
// }

// bool DoesContainLetterOrUnderscore(const string& potentialIdentifier) {
//     bool doesContainLetterOrUnderscore = false;
//     for (const char& symbol : potentialIdentifier) {
//         if (symbol == '_' || isalpha(symbol)) {
//             doesContainLetterOrUnderscore = true;
//             break;
//         }
//     }
//     return doesContainLetterOrUnderscore;
// }

// auto SplitIntoPotentialIdentifiers(const string& codeBlock) {
//     char symbol;
//     multiset<string> potentialIdentifiers;
//     unsigned lastSplit = 0, length = codeBlock.length();
//     for (unsigned i = 0; i < length; ++i) {
//         symbol = codeBlock[i];
//         if (symbol != '_' && isalnum(symbol) == false) {
//             if (i > lastSplit) potentialIdentifiers.emplace(codeBlock.substr(lastSplit, i - lastSplit));
//             lastSplit = i + 1;
//         }
//     }
//     if (potentialIdentifiers.empty()) potentialIdentifiers.emplace(codeBlock);
//     return potentialIdentifiers;
// }

// int main() {
//     unsigned numKeywords;
//     cin >> numKeywords;

//     string isCaseSensitive, canDigitBeFirst;
//     cin >> isCaseSensitive >> canDigitBeFirst;
    
//     unordered_set<string> keywords;
//     if (numKeywords > 0) {
//         string keyword;
//         for (unsigned i = 0; i < numKeywords; ++i) {
//             cin >> keyword;
//             if (isCaseSensitive == "no") MakeLowercase(keyword);
//             keywords.emplace(keyword);
//         }
//     }

//     string codeBlock;
//     unordered_multiset<string> potentialIdentifiers;
//     unordered_map<string, unsigned> identifierCounter;
//     while (cin >> codeBlock) {
//         potentialIdentifiers = SplitIntoPotentialIdentifiers(codeBlock);
//         for (string potentialIdentifier : potentialIdentifiers) {
//             if (isCaseSensitive == "no") MakeLowercase(potentialIdentifier);
//             if (keywords.contains(potentialIdentifier) ||
//                 isdigit(potentialIdentifier.front()) && (canDigitBeFirst == "no" ||
//                 DoesContainLetterOrUnderscore(potentialIdentifier) == false)) continue;
//             ++identifierCounter[potentialIdentifier];
//         }
//     }

//     unsigned maxCount = 0;
//     string mostFrequentIdentifier;
//     for (const auto& [identifier, count] : identifierCounter) {
//         if (count > maxCount) {
//             maxCount = count;
//             mostFrequentIdentifier = identifier;
//         }
//     }
//     cout << mostFrequentIdentifier << endl;

//     return EXIT_SUCCESS;
// }