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
        int i = 0, j = s.size() - 1;
        while (i < j)
        {
            swap(s[i++], s[j--]);
        }
        cout << s << endl;
    }
    return 0;
}