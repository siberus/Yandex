#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    unsigned numStudents, numTeachers;
    cin >> numStudents >> numTeachers;
    vector<pair<unsigned, unsigned>> supervisionRanges(numTeachers);
    for (auto &[first, last] : supervisionRanges)
    {
        cin >> first >> last;
    }
    sort(supervisionRanges.begin(), supervisionRanges.end());

    unsigned cur = 0, numUnsupervisedStudents = 0;
    for (const auto &[first, last] : supervisionRanges)
    {
        if (first > cur)
            numUnsupervisedStudents += first - cur;
        if (last >= cur)
            cur = last + 1;
    }
    if (cur < numStudents)
        numUnsupervisedStudents += numStudents - cur;
    cout << numUnsupervisedStudents << endl;

    return EXIT_SUCCESS;
}