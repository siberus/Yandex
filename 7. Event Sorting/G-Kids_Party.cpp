// #include <algorithm>
// #include <iostream>
// #include <iterator>
// #include <vector>
// #include <tuple>

// using namespace std;

// using Balloon = pair<int, short>;
// using Volunteer = tuple<char, char, short, short, short>;


// int main() {
//     short numBalloons, numVolunteers;
//     cin >> numBalloons >> numVolunteers;

//     short i = 0;
//     vector<Volunteer> volunteers(numVolunteers);
//     for (auto& [timePerBalloon, restTime, numBalloonsBeforeRest, totalNumBalloons, index] : volunteers) {
//         cin >> timePerBalloon >> numBalloonsBeforeRest >> restTime;
//         totalNumBalloons = 0;
//         index = i;
//         ++i;
//     }
//     sort(volunteers.begin(), volunteers.end());

//     i = 0;
//     int curTime = 0;
//     vector<Balloon> balloons_1(numBalloons);
//     const auto& [timePerBalloon_1, restTime_1, numBalloonsBeforeRest_1, totalNumBalloons_1, index_1] = volunteers.front();
//     for (auto& [readyTime, volunteerIndex] : balloons_1) {
//         if (i == numBalloonsBeforeRest_1)
//             curTime += restTime_1;
//         curTime += timePerBalloon_1;
//         readyTime = curTime;
//         volunteerIndex = index_1;
//         ++i;
//     }
//     volunteers.erase(volunteers.begin());

//     i = 0;
//     curTime = 0;
//     vector<Balloon> balloons_2(numBalloons);
//     const auto& [timePerBalloon_2, restTime_2, numBalloonsBeforeRest_2, totalNumBalloons_2, index_2] = volunteers.front();
//     for (auto& [readyTime, volunteerIndex] : balloons_2) {
//         if (i == numBalloonsBeforeRest_2)
//             curTime += restTime_2;
//         curTime += timePerBalloon_2;
//         readyTime = curTime;
//         volunteerIndex = index_2;
//         ++i;
//     }
//     volunteers.erase(volunteers.begin());

//     vector<Balloon> mergedBalloons;
//     merge(balloons_1.begin(), balloons_1.end(), balloons_2.begin(), balloons_2.end(), back_inserter(mergedBalloons));

//     for (const auto& [timePerBalloon, restTime, numBalloonsBeforeRest, totalNumBalloons, index] : volunteers) {
//         i = 0;
//         curTime = 0;
//         for (auto& [readyTime, volunteerIndex] : balloons_1) {
//             if (i == numBalloonsBeforeRest)
//                 curTime += restTime;
//             curTime += timePerBalloon;
//             readyTime = curTime;
//             volunteerIndex = index;
//             ++i;
//         }
//         merge(balloons_1.begin(), balloons_1.end(), mergedBalloons.begin(), mergedBalloons.end(), back_inserter(mergedBalloons));
//     }

//     i = 1;
//     int minTime;
//     for (const auto& [readyTime, volunteerIndex] : mergedBalloons) {
//         ++get<3>(volunteers[volunteerIndex]);
//         if (i == numBalloons) {
//             minTime = readyTime;
//             break;
//         }
//         ++i;
//     }

//     cout << minTime << endl;
//     for (const Volunteer& volunteer : volunteers) {
//         cout << get<3>(volunteer) << ' ';
//     }
//     cout << endl;

//     return EXIT_SUCCESS;
// }