#include <bits/stdc++.h>
using namespace std;

int main()
{

    int testCase;
    cin >> testCase;
    cin.ignore();
    while (testCase--)
    {
        string s, word;
        getline(cin, s);
        stringstream stream(s);

        stream >> word;
        for (int i = word.size() - 1; i >= 0; i--)
        {
            cout << word[i];
        }
        while (stream >> word)
        {
            cout << " ";
            for (int i = word.size() - 1; i >= 0; i--)
            {
                cout << word[i];
            }
        }
        cout << endl;
    }
    return 0;
}