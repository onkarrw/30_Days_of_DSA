/*
 Rotate the array left N times. Accept N value from the user.
*/

// left rotate

#include <iostream>
using namespace std;

leftRotate(int arr[], int n)
{

    int k;
    cout << "left rotate array ?? times : ";
    cin >> k;
    while (k > 0)
    {
        int temp = arr[0];
        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = temp;

        k--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << endl;
}

rightRotate(int arr[], int n)
{

    int k;
    cout << "right rotate array ?? times : ";
    cin >> k;
    while (k > 0)
    {
        int temp = arr[n - 1];

        for (int i = n - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = temp;

        k--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    leftRotate(arr, n);

    rightRotate(arr, n);
}
