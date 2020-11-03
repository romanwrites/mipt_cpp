#include <iostream>

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
	bool isSorted = false;
	int tmp;
	while (!isSorted)
	{
		isSorted = true;
		for (int i = 0; i < n - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
				isSorted = false;
			}
		}
	}
	int missed = 0;
	for (int i = 0; i < n - 1; i++)
	{
		while (arr[i] + 1 < arr[i + 1])
		{
			missed++;
			arr[i]++;
		}
	}
	cout << missed;
}
