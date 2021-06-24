// Unsolved

// #include <algorithm>
// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {
//     unsigned numSegments, numPoints;
//     cin >> numSegments >> numPoints;
//     vector<pair<int, int>> segments(numSegments);
//     for (auto &[start, end] : segments)
//     {
//         cin >> start >> end;
//         if (start > end)
//             swap(start, end);
//     }
//     sort(segments.begin(), segments.end());

//     vector<int> points(numPoints);
//     for (int &point : points)
//     {
//         cin >> point;
//     }

//     unsigned numCoveringSegments;
//     for (const int &point : points)
//     {
//         numCoveringSegments = 0;
//         for (auto &[start, end] : segments)
//         {
//             if (point < start)
//                 break;
//             else if (point <= end)
//                 ++numCoveringSegments;
//         }
//         cout << numCoveringSegments << ' ';
//     }
//     cout << endl;

//     return EXIT_SUCCESS;
// }