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

        for (int i = 0; i < n; i += 2)
        {
            cout << v[i] << " ";
        }
        if (testCase > 0)
        {
            cout << endl;
        }
    }
    return 0;
}