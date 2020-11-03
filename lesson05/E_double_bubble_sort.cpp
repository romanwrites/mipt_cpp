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
/*
 * n = 10;
 * int arr[10] = {-4, -79, -17, -12, 94, 65, -56, -79, -7, 39};
 * n = 15;
 * int arr[15] = {78, -57, -54, -61, -10, 42, -19, -92, 0, -23, -27, -3, 4, -41, -94};
 */

	bool isSorted = false;
	int tmp;

	int j = 0;
	while (!isSorted)
	{
		isSorted = true;
		for (int i = 0; i < n - 1; i++)
		{
			if (arr[i] >= 0)
			{
				j = i + 1;
				while (arr[j] < 0 && j < n - 1)
				{
					if (arr[j + 1] < 0 && arr[j] < arr[j + 1])
					{
						tmp = arr[j];
						arr[j] = arr[j + 1];
						arr[j + 1] = tmp;
						isSorted = false;
						printArr(arr, n);
					}
					j++;
				}
				if (arr[j] >= 0 && arr[i] > arr[j])
				{
					tmp = arr[i];
					arr[i] = arr[j];
					arr[j] = tmp;
					isSorted = false;
					printArr(arr, n);
				}
			}
			else if (arr[i] < 0)
			{
				j = i + 1;
				while (arr[j] >= 0 && j < n - 1)
				{
					if (arr[j + 1] >= 0 && arr[j] > arr[j + 1])
					{
						tmp = arr[j];
						arr[j] = arr[j + 1];
						arr[j + 1] = tmp;
						isSorted = false;
						printArr(arr, n);
					}
					j++;
				}
				if (arr[j] < 0 && arr[i] < arr[j])
				{
					tmp = arr[i];
					arr[i] = arr[j];
					arr[j] = tmp;
					isSorted = false;
					printArr(arr, n);
					i = j - 1;
				}
			}
		}
	}
}
