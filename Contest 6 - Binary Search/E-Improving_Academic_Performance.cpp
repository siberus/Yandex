// #include <iostream>

// using namespace std;

// int main()
// {
//     long unsigned numTwos, numThrees, numFours;
//     cin >> numTwos >> numThrees >> numFours;

//     long unsigned numMarks = numTwos + numThrees + numFours,
//                   midFives, minFives = 0, maxFives = numMarks + 1,
//                   sumMarks = 2 * numTwos + 3 * numThrees + 4 * numFours;
//     while (minFives < maxFives)
//     {
//         midFives = minFives + (maxFives - minFives) / 2;
//         if (2 * (sumMarks + 5.0 * midFives) < 7 * (numMarks + midFives))
//             minFives = midFives + 1;
//         else
//             maxFives = midFives;
//     }
//     cout << minFives << endl;

//     return EXIT_SUCCESS;
// }