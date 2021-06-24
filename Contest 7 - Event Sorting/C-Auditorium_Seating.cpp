// Unsolved

// #include <algorithm>
// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {
//     unsigned numStudents, maxDistance;
//     cin >> numStudents >> maxDistance;

//     unsigned position;
//     vector<pair<unsigned, unsigned>> positions;
//     for (unsigned i = 0; i < numStudents; ++i)
//     {
//         cin >> position;
//         positions.emplace_back(position, i);
//     }
//     sort(positions.begin(), positions.end());

//     unsigned cur, numExamVariants = 1;
//     vector<unsigned> variants(numStudents);
//     auto [prev, originalIndex] = positions.front();
//     variants[originalIndex] = prev;
//     for (unsigned i = 1; i < numStudents; ++i)
//     {
//         auto [cur, originalIndex] = positions[i];
//         if (cur - prev <= maxDistance)
//             ++numExamVariants;
//         variants[originalIndex] = numExamVariants;
//         prev = cur;
//     }

//     unsigned minNumExamVariants = numExamVariants;
//     cout << minNumExamVariants << endl;
//     for (const unsigned &variant : variants)
//     {
//         cout << variant << ' ';
//     }
//     cout << endl;

//     return EXIT_SUCCESS;
// }