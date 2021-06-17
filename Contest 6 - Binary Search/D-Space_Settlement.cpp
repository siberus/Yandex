// Unsolved

// #include <algorithm>
// #include <iostream>

// using namespace std;


// int main() {
//     long long numModules, width, length, fieldWidth, fieldHeight;
//     cin >> numModules >> width >> length >> fieldWidth >> fieldHeight;

//     long long thickness, low = 0, high = 1e18, maxModules, maxCoatingThickness;
//     while (high - 1 > 1) {
//         thickness = (low + high) / 2;
//         maxModules = max((fieldWidth / (width + 2 * thickness)) * (fieldHeight / (length + 2 * thickness)),
//                          (fieldHeight / (width + 2 * thickness)) * (fieldWidth / (length + 2 * thickness)));
//         if (maxModules >= numModules) {
//             low = thickness;
//         } else {
//             high = thickness;
//         }
//     }
//     maxCoatingThickness = low;
//     cout << maxCoatingThickness << endl;

//     return EXIT_SUCCESS;
// }