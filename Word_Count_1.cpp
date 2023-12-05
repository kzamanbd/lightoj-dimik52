#include <bits/stdc++.h>
using namespace std;

int main()
{

    int testCase;
    cin >> testCase;
    cin.ignore();
    while (testCase--)
    {
        string s;
        getline(cin, s);
        int count = 1, flag = 0;

        for (char c : s)
        {
            if (c == ' ')
            {
                count++;
            }
        }

        cout << "Count = " << count << endl;
    }
    return 0;
}