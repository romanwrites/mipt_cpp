#include <iostream>

/* Sum of array elements greater than the average */

int		main(void)
{
	using namespace std;

	int n, i = 0, sum = 0, res = 0;

	cin >> n;
	int arr[n];
	while (i < n)
	{
		cin >> arr[i];
		sum += arr[i];
		i++;
	}
	float average = float(sum) / n;

	while (n-- > 0)
	{
		if (float(arr[n]) > average)
			res += arr[n];
	}
	cout << res;
}
