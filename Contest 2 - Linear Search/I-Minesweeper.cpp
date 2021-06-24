#include <iostream>
#include <vector>

using namespace std;

struct Mine
{
    unsigned row, col;
};

int main()
{
    unsigned numRows, numCols, numMines;
    cin >> numRows >> numCols >> numMines;

    vector<Mine> mines(numMines);
    for (Mine &mine : mines)
    {
        cin >> mine.row >> mine.col;
    }

    bool isOccupiedByMine;
    unsigned numLocalMines;
    for (unsigned i = 1; i <= numRows; ++i)
    {
        for (unsigned j = 1; j <= numCols; ++j)
        {
            numLocalMines = 0;
            isOccupiedByMine = false;
            for (Mine &mine : mines)
            {
                if (mine.row == i && mine.col == j)
                {
                    isOccupiedByMine = true;
                    break;
                }
                if ((mine.row == i - 1 || mine.row == i || mine.row == i + 1) &&
                    (mine.col == j - 1 || mine.col == j || mine.col == j + 1))
                    ++numLocalMines;
            }
            (isOccupiedByMine) ? (cout << "* ") : (cout << numLocalMines << ' ');
            if (j == numCols)
                cout << endl;
        }
    }

    return EXIT_SUCCESS;
}