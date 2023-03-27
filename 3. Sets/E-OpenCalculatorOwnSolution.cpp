#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;


int main() {
    int startLength, result;
    char digit_1, digit_2, digit_3;
    cin >> digit_1 >> digit_2 >> digit_3;
    unordered_set<char> availableDigits = { digit_1, digit_2, digit_3 };
    startLength = availableDigits.size();
    string number;
    cin >> number;
    unordered_set<char> requiredDigits;
    for (const char& digit : number) {
        availableDigits.emplace(digit);
    }

    result = availableDigits.size() - startLength;
   
    cout << result << endl;

    return EXIT_SUCCESS;
}