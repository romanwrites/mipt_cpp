#include <iostream>

void	printArr(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

int		main(void)
{
	using namespace std;
	
	int n;

	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
//	n = 10;
//	int arr[10] = {-4, -79, -17, -12, 94, 65, -56, -79, -7, 39};
	bool isSorted = false;
	int tmp;


	int j = 0;
	while (!isSorted)
	{
		isSorted = true;
		for (int i = 0; i < n - 1; i++)
		{
			if (arr[i] < 0)
			{
				j = i + 1;
				while (arr[j] >= 0 && j < n)
				{
					j++;
				}
				if (arr[j] < 0 && arr[i] < arr[j])
				{
					tmp = arr[i];
					arr[i] = arr[j];
					arr[j] = tmp;
					isSorted = false;
					printArr(arr, n);
//					i++;
				}

			}
			else if (arr[i] >= 0)
			{
				j = i + 1;
				while (arr[j] < 0 && j < n)
				{
					j++;
				}
				if (arr[j] >= 0 && arr[i] > arr[j])
				{
					tmp = arr[i];
					arr[i] = arr[j];
					arr[j] = tmp;
					isSorted = false;
					printArr(arr, n);
//					i++;
				}
			}
		}
	}
}

/*
-4 -17 -79 -12 94 65 -56 -79 -7 39
-4 -17 -12 -79 94 65 -56 -79 -7 39
-4 -17 -12 -79 65 94 -56 -79 -7 39
-4 -17 -12 -56 65 94 -79 -79 -7 39
-4 -17 -12 -56 65 94 -79 -7 -79 39
-4 -17 -12 -56 65 39 -79 -7 -79 94
-4 -12 -17 -56 65 39 -79 -7 -79 94
-4 -12 -17 -56 39 65 -79 -7 -79 94
-4 -12 -17 -56 39 65 -7 -79 -79 94
-4 -12 -17 -7 39 65 -56 -79 -79 94
-4 -12 -7 -17 39 65 -56 -79 -79 94
-4 -7 -12 -17 39 65 -56 -79 -79 94

*/