// Unsolved

// #include <iostream>
// #include <vector>
// #include <cmath>

// using namespace std;


// unsigned LeftmostBinarySearch(const vector<int>& array, const int& key) {
//     unsigned mid, low = 0, high = array.size();
//     while (low < high) {
//         mid = low + (high - low) / 2;
//         (array[mid] < key)?(low = mid + 1):(high = mid);
//     }
//     return low;
// }

// unsigned RightmostBinarySearch(const vector<int>& array, const int& key) {
//     unsigned mid, low = 0, high = array.size();
//     while (low < high) {
//         mid = low + (high - low) / 2;
//         (array[mid] > key)?(high = mid):(low = mid + 1);
//     }
//     return high - 1;
// }

// int main() {
//     unsigned numElements, numKeys;
//     cin >> numElements >> numKeys;
//     vector<int> array(numElements);
//     for (int& element : array) {
//         cin >> element;
//     }

//     unsigned low, high;
//     int key, closestElement;
//     for (unsigned k = 0; k < numKeys; ++k) {
//         cin >> key;
//         low = LeftmostBinarySearch(array, key);
//         high = RightmostBinarySearch(array, key);
//         closestElement = (abs(key - array[low]) < abs(key - array[high]))?(array[low]):(array[high]);
//         cout << closestElement << endl;
//     }

//     return EXIT_SUCCESS;
// }