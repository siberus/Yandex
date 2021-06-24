#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    long unsigned numModules, width, length, fieldWidth, fieldHeight;
    cin >> numModules >> width >> length >> fieldWidth >> fieldHeight;

    long unsigned thickness, midNumModules, maxThickness = 0, minThickness = 1e18;
    while (minThickness > maxThickness + 1)
    {
        thickness = maxThickness + (minThickness - maxThickness) / 2;
        midNumModules = max((fieldWidth / (width + 2 * thickness)) * (fieldHeight / (length + 2 * thickness)),
                            (fieldHeight / (width + 2 * thickness)) * (fieldWidth / (length + 2 * thickness)));
        (midNumModules < numModules) ? (minThickness = thickness) : (maxThickness = thickness);
    }
    cout << maxThickness << endl;

    return EXIT_SUCCESS;
}