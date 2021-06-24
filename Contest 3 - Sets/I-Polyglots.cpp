#include <unordered_set>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    unsigned numPupils;
    cin >> numPupils;

    string lang;
    unsigned numLangs;
    unordered_set<string> allLangs, commonLangs;
    for (cin >> numLangs; numLangs > 0; --numLangs)
    {
        cin >> lang;
        allLangs.emplace(lang);
        commonLangs.emplace(lang);
    }

    unordered_set<string> langs;
    auto langIter = commonLangs.begin();
    for (unsigned i = 1; i < numPupils; ++i)
    {
        langs.clear();
        for (cin >> numLangs; numLangs > 0; --numLangs)
        {
            cin >> lang;
            langs.emplace(lang);
            allLangs.emplace(lang);
        }
        auto langIter = commonLangs.begin();
        while (langIter != commonLangs.end())
        {
            if (langs.contains(*langIter) == false)
                langIter = commonLangs.erase(langIter);
            else
                ++langIter;
        }
    }

    unsigned numCommonLangs = commonLangs.size();
    cout << numCommonLangs << endl;
    for (const string &lang : commonLangs)
    {
        cout << lang << endl;
    }

    unsigned numAllLangs = allLangs.size();
    cout << numAllLangs << endl;
    for (const string &lang : allLangs)
    {
        cout << lang << endl;
    }

    return EXIT_SUCCESS;
}