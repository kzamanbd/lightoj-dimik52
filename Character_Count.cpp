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
        int size = s.size();
        int count[26] = {0};
        for (int i = 0; i < size; i++)
        {
            count[int(s[i] - 97)]++;
        }

        // ! as input order
        // vector<int> v;

        // for (int i = 0; i < size; i++)
        // {
        //     int index = s[i] - 97;
        //     auto it = find(v.begin(), v.end(), index);
        //     if (it == v.end())
        //     {
        //         v.push_back(index);
        //     }
        // }

        // for (int i = 0; i < v.size(); i++)
        // {
        //     cout << char(v[i] + 97) << " = " << count[v[i]] << endl;
        // }

        //! for ascending order
        for (int i = 0; i < 26; i++)
        {
            if (count[i] > 0)
            {
                cout << char(i + 97) << " = " << count[i] << endl;
            }
        }

        if (testCase > 0)
        {
            cout << endl;
        }
    }
    return 0;
}