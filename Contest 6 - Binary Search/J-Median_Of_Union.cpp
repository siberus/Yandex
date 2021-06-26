// #include <algorithm>
// #include <iostream>
// #include <vector>

// using namespace std;

// void GenerateSequence(vector<int> &sequence, const unsigned &numElementsPerSequence, const int &d_1, const int &a, const int &c, const int &m)
// {
//     int d = d_1;
//     for (unsigned i = 0; i < numElementsPerSequence - 1; ++i)
//     {
//         sequence.emplace_back(sequence.back() + d);
//         d = (a * d + c) % m;
//     }
// }

// unsigned LeftmostBinarySearch(const vector<int> &sequence, const int &key)
// {
//     unsigned mid, low = 0, high = sequence.size() - 1;
//     while (low < high)
//     {
//         mid = low + (high - low) / 2;
//         (sequence[mid] < key) ? (low = mid + 1) : (high = mid);
//     }
//     return low;
// }

// void CountLess(unsigned &numLess, const vector<int> &sequence, const int &mid)
// {
//     numLess = LeftmostBinarySearch(sequence, mid);
//     numLess = (sequence[numLess] < mid) ? (sequence.size()) : (numLess);
// }

// void CountGreater(unsigned &numGreater, const vector<int> &sequence, const int &mid)
// {
//     numGreater = LeftmostBinarySearch(sequence, mid + 1);
//     numGreater = (sequence[numGreater] <= mid) ? (0) : (sequence.size() - numGreater);
// }

// int MedianOfUnion(const vector<int> &leftSequence, const vector<int> &rightSequence)
// {
//     int mid,
//         low = min(leftSequence.front(), rightSequence.front()),
//         high = max(leftSequence.back(), rightSequence.back());
//     unsigned numLess, leftNumLess, leftNumGreater,
//         numGreater, rightNumLess, rightNumGreater,
//         leftSequenceLength = leftSequence.size(),
//         rightSequenceLength = leftSequence.size();
//     while (low < high)
//     {
//         mid = low + (high - low) / 2;
//         CountLess(leftNumLess, leftSequence, mid);
//         CountLess(rightNumLess, rightSequence, mid);
//         numLess = leftNumLess + rightNumLess;
//         CountGreater(leftNumGreater, leftSequence, mid);
//         CountGreater(rightNumGreater, rightSequence, mid);
//         numGreater = leftNumGreater + rightNumGreater;
//         if (numLess < leftSequenceLength && numGreater <= leftSequenceLength)
//             return mid;
//         if (numGreater > leftSequenceLength)
//             low = mid + 1;
//         if (numLess >= leftSequenceLength)
//             high = mid - 1;
//     }
//     return low;
// }

// int main()
// {
//     unsigned numSequences, numElementsPerSequence;
//     cin >> numSequences >> numElementsPerSequence;

//     vector<int> sequence;
//     int x_1, d_1, a, c, m;
//     vector<vector<int>> sequences;
//     for (unsigned i = 0; i < numSequences; ++i)
//     {
//         cin >> x_1 >> d_1 >> a >> c >> m;
//         sequence = {x_1};
//         GenerateSequence(sequence, numElementsPerSequence, d_1, a, c, m);
//         sequences.emplace_back(sequence);
//     }

//     for (unsigned i = 0; i < numSequences; ++i)
//     {
//         for (unsigned j = i + 1; j < numSequences; ++j)
//         {
//             cout << MedianOfUnion(sequences[i], sequences[j]) << endl;
//         }
//     }

//     return EXIT_SUCCESS;
// }