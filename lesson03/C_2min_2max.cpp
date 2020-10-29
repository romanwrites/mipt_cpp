#include <iostream>

/* Find two smallest and two largest elements in sequence
and print their sums: min1 + min2, max1 + max2*/

using namespace std;

int		main()
{
	int min1, min2, max1, max2;
	min1 = min2 = max1 = max2 = 0;
	int n, i;
	cin >> n;
	cin >> i;
	min1 = max1 = i;
	n--;
	cin >> i;
	if (min1 > i)
	{
		min2 = min1;
		min1 = i;
	}
	else
		min2 = i;
	if (max1 < i)
	{
		max2 = max1;
		max1 = i;
	}
	else
		max2 = i;
	n--;
	while (n > 0) {
		cin >> i;
		if (i < min2)
		{
			if (i < min1)
			{
				min2 = min1;
				min1 = i;
			}
			else
				min2 = i;
		}
		else if (i > max2)
		{
			if (i > max1)
			{
				max2 = max1;
				max1 = i;
			}
			else
				max2 = i;
		}
		n--;
	}
	cout << min1 + min2 << " " << max1 + max2;
	
}