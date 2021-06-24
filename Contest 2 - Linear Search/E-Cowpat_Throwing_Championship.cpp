#include <iostream>
#include <vector>

using namespace std;

struct Option
{
    unsigned potentialVasily, potentialVasilyIndex;
};

int main()
{
    unsigned numParticipants;
    cin >> numParticipants;
    vector<unsigned> participants(numParticipants);

    cin >> participants[0] >> participants[1];
    unsigned farthest, farthestIndex, prev = participants[0], cur = participants[1];
    if (prev >= cur)
    {
        farthest = prev;
        farthestIndex = 0;
    }
    else
    {
        farthest = cur;
        farthestIndex = 1;
    }

    unsigned next;
    Option option;
    vector<Option> options;
    for (unsigned i = 2; i < numParticipants; ++i)
    {
        cin >> participants[i];
        next = participants[i];
        if (next > farthest)
        {
            farthest = next;
            farthestIndex = i;
        }
        if (cur % 10 == 5 && cur > next)
        {
            option.potentialVasily = cur;
            option.potentialVasilyIndex = i - 1;
            options.emplace_back(option);
        }
        prev = cur;
        cur = next;
    }

    unsigned highestVasilyPlace = 0;
    if (options.empty() == false)
    {
        unsigned farthestVasily = 0;
        for (const Option &option : options)
        {
            auto [potentialVasily, potentialVasilyIndex] = option;
            if (potentialVasily > farthestVasily &&
                potentialVasilyIndex > farthestIndex)
                farthestVasily = potentialVasily;
        }
        if (farthestVasily > 0)
        {
            ++highestVasilyPlace;
            for (const unsigned &participant : participants)
            {
                if (participant > farthestVasily)
                    ++highestVasilyPlace;
            }
        }
    }
    cout << highestVasilyPlace << endl;

    return EXIT_SUCCESS;
}