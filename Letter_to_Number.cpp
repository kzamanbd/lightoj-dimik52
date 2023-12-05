#include <bits/stdc++.h>
using namespace std;

int main()
{

    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        string s;
        cin >> s;
        string result;

        for (int i = 0; i < s.size(); i++)
        {
            result += to_string(int(s[i] - 64));
        }

        cout << result << endl;
    }
    return 0;
}