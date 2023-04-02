#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


int main(){
    unsigned numStudents, numTeatches;

    unsigned startStudent, endStudent;
    int type;

    cin >> numStudents >> numTeatches;
    vector<pair<unsigned, int>> events;

    for (unsigned i = 0; i < numTeatches; i++)
    {
        cin >> startStudent >> endStudent;
        events.push_back(make_pair(startStudent, -1));
        events.push_back(make_pair(endStudent, 1));
    }
    sort(events.begin(), events.end());
    unsigned notInRangesStudent =  events[0].first;
    unsigned supervision = 0;

    for(int i = 0; i < events.size(); i ++)
    {
        if(supervision == 0)
        {
            if(i > 0)
            {
                notInRangesStudent +=events[i].first - events[i-1].first -1;     
            }
        }
        if (events[i].second == -1)
        {
            supervision++;
        }
        else
        {
            supervision--;
        }
        
    }
    notInRangesStudent +=  numStudents- 1 - events.back().first;
         
    cout << notInRangesStudent;

    return EXIT_SUCCESS;
}