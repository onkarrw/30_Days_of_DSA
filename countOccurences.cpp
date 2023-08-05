
/*
Given a sorted array arr[] and a number x, write a function that counts the occurrences of x in arr[]

*/
#include <iostream>
using namespace std;

int main()
{

    int arr[] = {2, 5, 7, 8, 1, 4, 6, 2};

    int n = sizeof(arr) / sizeof(arr[0]);

    int x;
    int counter = 0;
    cin >> x;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            counter++;
        }
    }

    cout << x << " occurred " << counter << " times.";
}
