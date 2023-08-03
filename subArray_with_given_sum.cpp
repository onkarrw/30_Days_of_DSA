#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int arr[] = {1, 4, 7, 3, 9, 8, 4, 3, 8, 12};
	vector <int> subArray ;
	
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int sum = 15;
	int flag = 0;
	
	
	for (int i = 0 ; i< n ; i++)
	{
		subArray.clear();
		int tempsum = 0;
		for (int j = i; j < n ; j++)
		{
			tempsum += arr[j];
			subArray.push_back(arr[j]);
			
			if (tempsum == sum)
			{
					for (int i= 0; i< subArray.size() ;i++)
					{
						cout << subArray[i] << "  ";
					}
				flag = 1;
				break;
				
			}
			
			
		}
		
		if (flag == 1)
		{
			break;
		}
	
	}
	
	

	
}
