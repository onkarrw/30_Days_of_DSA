
/*

    Day 5

    Given an array of N integers, and an integer K, the task is to find the number of pairs of integers in the array whose sum is equal to K.

*/

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4, 5};

    int sum = 6;
    int count = 0;

    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {

            if (arr[i] + arr[j] == sum)
                count++;
        }
    }

    cout << "Number of pairs with sum " << sum << " are " << count;
}
