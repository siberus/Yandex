// Unsolved

// #include <algorithm>
// #include <iostream>
// #include <iterator>
// #include <vector>
// #include <string>
// #include <set>

// using namespace std;


// int main() {
//     unsigned numPupils;
//     cin >> numPupils;

//     string language;
//     unsigned numLanguages;
//     cin >> numLanguages;
//     set<string> languages;
//     while (numLanguages) {
//         cin >> language;
//         languages.emplace(language);
//         --numLanguages;
//     }

//     string nextLanguage;
//     unsigned numNextLanguages;
//     cin >> numNextLanguages;
//     set<string> nextLanguages;
//     while (numNextLanguages) {
//         cin >> nextLanguage;
//         nextLanguages.emplace(nextLanguage);
//         --numNextLanguages;
//     }

//     vector<string> allLanguages, commonLanguages;
//     ranges::set_union(languages, nextLanguages, back_inserter(allLanguages));
//     ranges::set_intersection(languages, nextLanguages, back_inserter(commonLanguages));

//     numPupils -= 2;
//     for (unsigned i = 0; i < numPupils; ++i) {
//         cin >> numNextLanguages;
//         while (numNextLanguages) {
//             cin >> nextLanguage;
//             nextLanguages.emplace(nextLanguage);
//             --numNextLanguages;
//         }
//         ranges::set_union(allLanguages, nextLanguages, back_inserter(allLanguages));
//         ranges::set_intersection(commonLanguages, nextLanguages, back_inserter(commonLanguages));
//     }

//     unsigned numAllLanguages = allLanguages.size();
//     cout << numAllLanguages << endl;
//     for (const string& language : allLanguages) {
//         cout << language << endl;
//     }

//     unsigned numCommonLanguages = commonLanguages.size();
//     cout << numCommonLanguages << endl;
//     for (const string& language : commonLanguages) {
//         cout << language << endl;
//     }

//     return EXIT_SUCCESS;
// }