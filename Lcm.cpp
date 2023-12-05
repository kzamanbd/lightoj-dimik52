#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    int tmp;
    while (b != 0)
    {
        tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}

int main()
{
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int x, y;
        cin >> x >> y;
        int gcdVal = gcd(x, y);

        long long int multiply = x * 1.0 * y * 1.0;

        long long int lcm = multiply / gcdVal;
        cout << "LCM = " << lcm << endl;
    }
    return 0;
}