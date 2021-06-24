#include <iostream>

using namespace std;

int main()
{
    long unsigned numCopies, copyTime_1, copyTime_2;
    cin >> numCopies >> copyTime_1 >> copyTime_2;

    long unsigned copyTime, midNumCopies, minTotalCopyTime,
                  maxCopyTime = 0, minCopyTime = (numCopies - 1) * ((copyTime_1 > copyTime_2) ? (copyTime_1) : (copyTime_2));
    while (minCopyTime > maxCopyTime + 1)
    {
        copyTime = maxCopyTime + (minCopyTime - maxCopyTime) / 2;
        midNumCopies = copyTime / copyTime_1 + copyTime / copyTime_2;
        (midNumCopies < numCopies - 1) ? (maxCopyTime = copyTime) : (minCopyTime = copyTime);
    }
    minTotalCopyTime = minCopyTime + ((copyTime_1 < copyTime_2) ? (copyTime_1) : (copyTime_2));
    cout << minTotalCopyTime << endl;

    return EXIT_SUCCESS;
}