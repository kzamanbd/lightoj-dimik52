#include <bits/stdc++.h>
using namespace std;

int main()
{

    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int n;
        cin >> n;

        int tmp = n;

        int last = tmp % 10;
        tmp /= 10;
        int mid = tmp % 10;
        tmp /= 10;
        int first = tmp;

        // cout << first << mid << last << endl;

        float power = pow(first * 1.0, 3) + pow(mid * 1.0, 3) + pow(last * 1.0, 3);
        // cout << power << endl;

        if (power == n)
        {

            cout << n << " is an armstrong number!";
        }
        else
        {
            cout << n << " is not an armstrong number!";
        }

        cout << endl;
    }
    return 0;
}