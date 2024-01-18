#include <bits/stdc++.h>
using namespace std;

int main()
{

    int testCase;
    cin >> testCase;
    int arr[11] = {2, 3, 5, 7, 13, 17, 19, 31, 61, 89, 107};
    while (testCase--)
    {
        unsigned long int x;
        cin >> x;
        int flag = 0;
        for (int i = 0; i < 11; i++)
        {
            unsigned long int result = pow(2, arr[i] - 1) * (pow(2, arr[i]) - 1);
            if (result == x)
            {
                flag = 1;
                break;
            }
            else if (result > x)
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
        {
            cout << "YES, " << x << " is a perfect number!";
        }
        else
        {
            cout << "NO, " << x << " is not a perfect number!";
        }

        cout << endl;
    }
    return 0;
}