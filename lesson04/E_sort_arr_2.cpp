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
	bool flag = false;
	for (int i = 0; i < n - 1; i++)
	{
		if (arr[i] == arr[i + 1])
		{
			if (flag)
			{
				cout << 0;
				return (0);
			}
			flag = true;	
		}
			
	}
	cout << 1;
	return (0);
}
