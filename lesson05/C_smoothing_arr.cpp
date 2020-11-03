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
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
		{
			cout << (arr[i] + arr[n - 1] + arr[i + 1]) / 3 << " ";
		}
		else if (i == n - 1)
		{
			cout << (arr[i] + arr[i - 1] + arr[0]) / 3 << " ";
		}
		else
		{
			cout << (arr[i] + arr[i - 1] + arr[i + 1]) / 3 << " ";
		}
	}
}
