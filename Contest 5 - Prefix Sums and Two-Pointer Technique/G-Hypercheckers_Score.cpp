#include <iostream>
#include <iterator>
#include <map>

using namespace std;

int main()
{
    long long numCards, differenceMultiplier;
    cin >> numCards >> differenceMultiplier;

    long long card;
    map<long long, long long> cardCounter;
    for (long long i = 0; i < numCards; ++i)
    {
        cin >> card;
        ++cardCounter[card];
    }

    long long range, numDuplicates = 0, numScoreOptions = 0;
    for (auto left = cardCounter.begin(), right = cardCounter.begin(); left != cardCounter.end(); next(left))
    {
        while (right != cardCounter.end() &&
               (*left).first * differenceMultiplier >= (*right).first)
        {
            if ((*right).second > 1)
                ++numDuplicates;
            next(right);
        }
        range = distance(left, right);
        if ((*left).second > 1)
        {
            numScoreOptions += (range - 1) * 3;
            --numDuplicates;
        }
        if ((*left).second > 2)
            ++numScoreOptions;
        numScoreOptions += ((range - 1) * (range - 2) + numDuplicates) * 3;
    }
    cout << numScoreOptions << endl;

    return EXIT_SUCCESS;
}