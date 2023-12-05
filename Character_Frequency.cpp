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
        char c;
        cin >> c;
        int count = 0;
        cin.ignore();
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == c)
            {
                count++;
            }
        }
        if (count > 0)
        {
            cout << "Occurrence of '" << c << "' in '" << s << "' = " << count;
        }
        else
        {

            cout << "'" << c << "' is not present";
        }
        cout << endl;
    }
    return 0;
}