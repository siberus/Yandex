#include <iostream>

using namespace std;

int main()
{
    long unsigned width, height, numDiplomas;
    cin >> width >> height >> numDiplomas;

    long unsigned boardSide, midNumDiplomas,
                  maxBoardSide = (width > height) ? (width) : (height),
                  minBoardSide = maxBoardSide * numDiplomas;
    while (minBoardSide > maxBoardSide + 1)
    {
        boardSide = maxBoardSide + (minBoardSide - maxBoardSide) / 2;
        midNumDiplomas = (boardSide / width) * (boardSide / height);
        (midNumDiplomas < numDiplomas) ? (maxBoardSide = boardSide) : (minBoardSide = boardSide);
    }
    cout << minBoardSide << endl;

    return EXIT_SUCCESS;
}