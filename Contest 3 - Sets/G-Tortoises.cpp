// Unsolved

// #include <unordered_set>
// #include <iostream>

// using namespace std;


// int main() {
//     int numTortoises;
//     cin >> numTortoises;

//     pair<int, int> tortoise;
//     unordered_set<pair<int, int>> tortoises;
//     int tortoiseCountdown = numTortoises + 1, numTruthTellingTortoises = 0;
//     while (--tortoiseCountdown) {
//         cin >> tortoise.first >> tortoise.second;
//         if ((tortoise.first >= 0 && tortoise.second >= 0) &&
//             (tortoise.first + tortoise.second + 1 == numTortoises) &&
//             (tortoises.contains(tortoise) == false)) {
//             tortoises.emplace(tortoise);
//             ++numTruthTellingTortoises;
//         }
//     }
//     cout << numTruthTellingTortoises << endl;

//     return EXIT_SUCCESS;
// }