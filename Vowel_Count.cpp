#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        return true;
    }
    else if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        return true;
    }
    return false;
}

int main()
{

    int testCase;
    cin >> testCase;
    cin.ignore();
    while (testCase--)
    {
        string s;
        getline(cin, s);
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (isVowel(s[i]))
            {
                count++;
            }
        }
        cout << "Number of vowels = " << count << endl;
    }
    return 0;
}