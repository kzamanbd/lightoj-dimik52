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
        int count = 0, flag = 0;

        for (char c : s)
        {
            if (isalpha(c))
            {
                if (flag == 0)
                {
                    count++;
                    flag = 1;
                }
            }
            else
            {
                flag = 0;
            }
        }

        cout << "Count = " << count << endl;
    }
    return 0;
}