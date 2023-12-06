#include <bits/stdc++.h>
using namespace std;

int main()
{

    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int ascFlag = 1, descFlag = 1;

        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] > v[i + 1])
            {
                ascFlag = 0;
                break;
            }
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] < v[i + 1])
            {
                descFlag = 0;
                break;
            }
        }

        if (ascFlag == 1 || descFlag == 1)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}