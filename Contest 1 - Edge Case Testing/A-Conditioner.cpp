#include <iostream>
#include <string>

using namespace std;

int main()
{
    string mode;
    int tempRoom, tempCond;
    cin >> tempRoom >> tempCond >> mode;

    int tempInHour = tempRoom;
    if (mode == "auto" ||
        mode == "heat" && tempRoom < tempCond ||
        mode == "freeze" && tempRoom > tempCond)
        tempInHour = tempCond;
    cout << tempInHour << endl;

    return EXIT_SUCCESS;
}