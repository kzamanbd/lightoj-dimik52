#include <bits/stdc++.h>
using namespace std;

int main()
{

    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        char c;
        cin >> c;
        if (c >= '0' && c <= '9')
        {
            cout << "Numerical Digit";
        }
        else if (c >= 'A' && c <= 'Z')
        {
            cout << "Uppercase Character";
        }
        else if (c >= 'a' && c <= 'z')
        {
            cout << "Lowercase Character";
        }
        else
        {
            cout << "Special Characters";
        }

        cout << endl;
    }
    return 0;
}