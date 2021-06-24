#include <unordered_set>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;
    unsigned numUniqueWords;
    unordered_set<string> uniqueWords;
    while (cin >> word)
    {
        uniqueWords.emplace(word);
    }
    numUniqueWords = uniqueWords.size();
    cout << numUniqueWords << endl;

    return EXIT_SUCCESS;
}