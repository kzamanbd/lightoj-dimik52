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
        string vowel, consonants;
        for (int i = 0; i < s.size(); i++)
        {
            if (isVowel(s[i]))
            {
                vowel.push_back(s[i]);
            }
            else
            {
                if (s[i] != ' ')
                {
                    consonants.push_back(s[i]);
                }
            }
        }
        cout << vowel << endl;
        cout << consonants << endl;
    }
    return 0;
}