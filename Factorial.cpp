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
        long long int result = 1;
        for (int i = 1; i <= x; i++)
        {
            result *= i;
        }
        cout << result << endl;
    }
    return 0;
}