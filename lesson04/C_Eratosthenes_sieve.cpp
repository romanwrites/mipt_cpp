#include <iostream>

/* Implementation of Eratosthenes sieve algorithm */

int		main(void)
{
	using namespace std;
	
	int n;

	cin >> n;
	bool arr[n + 1];
	for (int i = 2; i < n + 1; i++)
	{
		arr[i] = true;
	}
	int x = 2;
	while (x * x <= n)
	{
		if (arr[x])
		{
			for (int y = x * x; y <= n; y += x)
			{
				arr[y] = false;
			}
		}
		x += 1;
	}
	for (int i = 2; i < n + 1; i++)
	{
		if (arr[i])
			cout << i << " ";
	}
}
