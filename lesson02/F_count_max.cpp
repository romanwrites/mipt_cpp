#include <iostream>

/* Number of elements equal to the maximum */

int		main()
{
	int	count = 0;
	int max = 0;
	int n = 0;

	std::cin >> n;
	
	while (n != 0)
	{
		if (max == n)
			count++;
		else if (max < n)
		{
			max = n;
			count = 1;
		}
		std::cin >> n;
	}
	std::cout << count;
}