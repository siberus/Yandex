#include <iostream>

using namespace std;

int main()
{
    unsigned interval_1, interval_2, numTrains_1, numTrains_2;
    cin >> interval_1 >> interval_2 >> numTrains_1 >> numTrains_2;

    int incorrect = -1;

    unsigned minTime_1 = numTrains_1 + interval_1 * (numTrains_1 - 1),
             minTime_2 = numTrains_2 + interval_2 * (numTrains_2 - 1),
             left = (minTime_1 > minTime_2) ? (minTime_1) : (minTime_2),

             maxTime_1 = numTrains_1 + interval_1 * (numTrains_1 + 1),
             maxTime_2 = numTrains_2 + interval_2 * (numTrains_2 + 1),
             right = (maxTime_1 < maxTime_2) ? (maxTime_1) : (maxTime_2);

    if (left > right)
        cout << incorrect << endl;
    else
        cout << left << ' ' << right << endl;

    return EXIT_SUCCESS;
}