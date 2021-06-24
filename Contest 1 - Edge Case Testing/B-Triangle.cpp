#include <iostream>
#include <string>

using namespace std;

int main()
{
    unsigned a, b, c;
    cin >> a >> b >> c;

    string isTriangle = "NO";
    if (a + b > c &&
        a + c > b &&
        b + c > a)
        isTriangle = "YES";
    cout << isTriangle << endl;

    return EXIT_SUCCESS;
}