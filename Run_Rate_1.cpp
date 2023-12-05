#include <bits/stdc++.h>
using namespace std;

int main()
{

    int testCase;
    cin >> testCase;
    double targetedRun, currentRun, remainingBall, playedBall;

    while (testCase--)
    {
        // input value
        cin >> targetedRun >> currentRun >> remainingBall;
        playedBall = 300 - remainingBall;

        // first current run rate
        double cRate = (currentRun / playedBall) * 6;
        // second require run rate
        double rRate = ((targetedRun - currentRun + 1) / remainingBall) * 6;
        if (currentRun > targetedRun)
        {
            rRate = 0.00;
        }
        cout << fixed << setprecision(2) << cRate << " " << rRate << endl;
    }
    return 0;
}