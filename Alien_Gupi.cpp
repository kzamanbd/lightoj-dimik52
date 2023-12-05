#include <bits/stdc++.h>
using namespace std;

int main()
{

    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        double x;
        cin >> x;
        int count = 0;
        while (x > 1.0)
        {
            count++;
            x /= 2;
        }
        cout << count << " days" << endl;
    }
    return 0;
}