#include <bits/stdc++.h>
using namespace std;

int main()
{

    int testCase;
    cin >> testCase;
    int caseCount = 1;
    while (testCase--)
    {
        int x;
        cin >> x;
        cout << "Case " << caseCount << ": ";
        for (int i = 1; i <= x; i++)
        {
            if (x % i == 0)
            {
                cout << i;
                if (i != x)
                {
                    cout << " ";
                }
            }
        }
        caseCount++;
        cout << endl;
    }

    return 0;
}