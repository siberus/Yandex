// Unsolved

// #include <iostream>
// #include <vector>

// using namespace std;


// int main() {
//     unsigned numElements;
//     cin >> numElements;

//     vector<unsigned> sequence(numElements);
//     for (unsigned& element : sequence) {
//         cin >> element;
//     }

//     bool isSymmetric;
//     unsigned length, middle, minNumElementsToAdd;
//     for (unsigned i = 0; i < numElements; ++i) {
//         isSymmetric = true;
//         length = numElements - i, middle = length / 2 + 2;
//         for (unsigned j = i, k = 0; j < middle; ++j, ++k) {
//             if (sequence[j] != sequence[length - k]) {
//                 isSymmetric = false;
//                 break;
//             }
//         }
//         if (isSymmetric) {
//             minNumElementsToAdd = i;
//             break;
//         }
//     }
//     cout << minNumElementsToAdd << endl;

//     if (minNumElementsToAdd > 0) {
//         int indexToAdd = minNumElementsToAdd;
//         while (indexToAdd > 0) {
//             cout << sequence[--indexToAdd] << ' ';
//         }
//         cout << endl;
//     }

//     return EXIT_SUCCESS;
// }