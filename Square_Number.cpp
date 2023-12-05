#include <bits/stdc++.h>
using namespace std;

int main()
{

    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        long long int x;
        cin >> x;
        long long int result = sqrt(x);

        if (result * result == x)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }

        if (testCase > 0)
        {
            cout << endl;
        }
    }
    return 0;
}