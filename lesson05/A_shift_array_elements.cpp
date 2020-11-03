#include <iostream>

int		main(void)
{
	using namespace std;
	
	int n, m;

	cin >> n;
	cin >> m;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	m = m % n;
	for (int i = m; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	for (int i = 0; i < m; i++)
	{
		cout << arr[i] << " ";
	}
}
