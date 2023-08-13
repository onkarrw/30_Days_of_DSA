#include <iostream>
using namespace std;

int rtn(string s, int n)
{

    int a = 0;
    int sum = 0;
    int prev = 0;
    int value = 0;

    for (int i = n - 1; i >= 0; i--)
    {

        cout << sum << endl;

        char c = s.at(i);

        prev = value;

        switch (c)
        {
        case 'I':
            value = 1;
            break;
        case 'V':
            value = 5;
            break;
        case 'X':
            value = 10;
            break;
        case 'L':
            value = 50;
            break;
        case 'C':
            value = 100;
            break;
        case 'D':
            value = 500;
        case 'M':
            value = 1000;
        }

        cout << value << " is value" << endl;
        if (i == n - 1)
        {
            sum += value;
        }
        else
        {
            if (prev > value)
            {
                cout << "fix" << endl;
                sum -= value;
            }
            else
            {
                cout << "notfix" << endl;
                sum += value;
            }
        }
    }
    return sum;
}

int main()


{

    string s = "LXVI";
    int n = s.length();

    cout << rtn(s, n);

    return 0;
}