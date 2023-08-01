#include <iostream>	
#include <algorithm>


using namespace std;


int kth_largest_element(int arr[], int n, int k)
{

	sort(arr, arr+n);
	
	return arr[n-k];
}

int main()
{
	int arr[] = {4,7,12,9,1,8,1,3,5};
	
	int n = sizeof(arr) / sizeof(arr[0]);
	
	int k = 4;
	
	
	cout << kth_largest_element(arr, n, k);
	
	
	
}
