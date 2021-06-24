#include <unordered_map>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    unsigned wordLength, maxRepetitions;
    cin >> wordLength >> maxRepetitions;

    string word;
    cin >> word;

    char leftLetter, rightLetter;
    vector<pair<unsigned, unsigned>> substrings;
    unordered_map<char, unsigned> letterCounter;
    for (unsigned left = 0, right = 0; right < wordLength; ++right)
    {
        rightLetter = word[right];
        ++letterCounter[rightLetter];
        if (letterCounter[rightLetter] > maxRepetitions)
        {
            while (left < right && letterCounter[rightLetter] > maxRepetitions)
            {
                leftLetter = word[left];
                --letterCounter[leftLetter];
                ++left;
            }
        }
        substrings.emplace_back(make_pair(left + 1, right - left + 1));
    }

    unsigned maxSubstringLength = 0, maxSubstringIndex = 1;
    if (substrings.empty() == false)
    {
        for (const auto &[start, length] : substrings)
        {
            if (length > maxSubstringLength)
            {
                maxSubstringLength = length;
                maxSubstringIndex = start;
            }
        }
    }
    else
    {
        maxSubstringLength = wordLength;
    }
    cout << maxSubstringLength << ' ' << maxSubstringIndex << endl;

    return EXIT_SUCCESS;
}