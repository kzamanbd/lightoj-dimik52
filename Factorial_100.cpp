#include <bits/stdc++.h>
using namespace std;

int main()
{

    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int x;
        cin >> x;

        int count = 0, j = 5;
        while (x / j != 0)
        {
            count += x / j;
            j *= 5;
        }
        cout << count << endl;
    }
    return 0;
}