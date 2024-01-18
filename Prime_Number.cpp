#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x)
{
    for (int i = 2; i <= x / 2; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{

    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int x, y;
        cin >> x >> y;
        int mx = max(x, y);
        int mn = min(x, y);
        int countPrime = 0;

        for (int i = mn; i <= mx; i++)
        {
            if (isPrime(i))
            {
                countPrime++;
            }
        }
        cout << countPrime << endl;
    }
    return 0;
}