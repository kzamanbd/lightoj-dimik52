#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{

    if (n == 1 || n == 0)
    {
        return 1;
    }
    int result = factorial(n - 1);
    return result * n;
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
        int count[10] = {0};
        stringstream ss(s);
        string word;

        int i = 0;

        while (ss >> word)
        {
            string feq = s;
            while (feq.find(word) != -1)
            {
                feq.replace(feq.find(word), word.size(), "-");
                count[i]++;
            }
            i++;
        }
        for (int i = 0; i < 10; i++)
        {
            cout << count[i] << " ";
        }
        cout << endl;
        // cout << factorial(count) / count << endl;
    }
    cout << factorial(5);
    return 0;
}