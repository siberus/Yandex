// Unsolved

// #include <iostream>
// #include <vector>

// using namespace std;


// int main() {
//     unsigned numHeights;
//     cin >> numHeights;

//     int distance, height;
//     vector<int> heights(numHeights);
//     for (int& height : heights) {
//         cin >> distance >> height;
//     }

//     int prevHeight = heights.front(), curHeight;
//     vector<int> forwardAscents(numHeights + 1);
//     for (unsigned i = 2, k = 1; k < numHeights; ++i, ++k) {
//         curHeight = heights[k];
//         forwardAscents[i] = forwardAscents[i - 1];
//         if (curHeight > prevHeight) forwardAscents[i] += curHeight - prevHeight;
//         prevHeight = curHeight;
//     }

//     prevHeight = heights.back();
//     vector<int> backwardAscents(numHeights + 1);
//     for (int j = numHeights, k = numHeights - 2; k >= 0; ++j, --k) {
//         curHeight = heights[k];
//         backwardAscents[j] = backwardAscents[j - 1];
//         if (curHeight > prevHeight) backwardAscents[j] += curHeight - prevHeight;
//         prevHeight = curHeight;
//     }

//     unsigned numRoutes;
//     cin >> numRoutes;

//     int start, finish, ascentSum;
//     for (unsigned k = 0; k < numRoutes; ++k) {
//         cin >> start >> finish;
//         ascentSum = (start < finish)?(forwardAscents[finish] - forwardAscents[start]):(backwardAscents[start] - backwardAscents[finish]);
//         cout << ascentSum << endl;
//     }

//     return EXIT_SUCCESS;
// }