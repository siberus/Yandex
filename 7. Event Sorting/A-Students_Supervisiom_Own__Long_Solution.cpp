#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main(){
    unsigned numStudents, numTeatches;
    unsigned startStudent, endStudent;
    cin >> numStudents >> numTeatches;
    map<unsigned,unsigned> rangesSprevision;
    for (int i = 0; i < numStudents; i++)
            rangesSprevision.emplace(i,0);
    for (int i = 0; i < numTeatches; i ++){
        cin >> startStudent >> endStudent;
        for (int j = startStudent; j <= endStudent; j++)
            ++rangesSprevision[j];
    }
    unsigned notSupervisionStudent=0;
    for (int i = 0; i < numStudents; i++)
    {
        if(rangesSprevision[i] == 0)
            notSupervisionStudent++;
    }
    cout << notSupervisionStudent;



    return EXIT_SUCCESS;
}