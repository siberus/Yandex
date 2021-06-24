#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

struct Conditioner
{
    unsigned power, price;
};

int main()
{
    unsigned numClassrooms;
    cin >> numClassrooms;
    vector<unsigned> minPowers(numClassrooms);
    for (unsigned &minPower : minPowers)
    {
        cin >> minPower;
    }
    sort(minPowers.begin(), minPowers.end());

    unsigned numConditioners;
    cin >> numConditioners;
    vector<Conditioner> conditioners(numConditioners);
    for (Conditioner &conditioner : conditioners)
    {
        cin >> conditioner.power >> conditioner.price;
    }
    sort(conditioners.begin(), conditioners.end(), [](const Conditioner &left, const Conditioner &right) -> bool
         { return left.price < right.price; });

    unsigned cur = 0, minCost = 0;
    for (unsigned &minPower : minPowers)
    {
        while (cur < numConditioners)
        {
            if (conditioners[cur].power < minPower)
            {
                ++cur;
            }
            else
            {
                minCost += conditioners[cur].price;
                break;
            }
        }
    }
    cout << minCost << endl;

    return EXIT_SUCCESS;
}