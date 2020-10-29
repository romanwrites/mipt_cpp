#include <iostream>

/* Find max even number in sequence */

int		main()
{
	int	n;
	int max_even = 0;

	std::cin >> n;
	while (n != 0)
	{
		if (n % 2 == 0 && max_even < n) {
			max_even = n;
		}
		std::cin >> n;
	}
	std::cout << max_even;
}
