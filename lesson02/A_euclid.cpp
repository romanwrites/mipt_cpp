#include <iostream>

/* Find greatest common divisor */

int	euclid(long int x, long int y)
{
	while (x != y)
	{	
		if (x > y) {
			x -= y;
		}
		else {
			y -= x;
		}
	}
	return (x);
}

int		main()
{
	long int x, y;

	std::cin >> x;
	std::cin >> y;

	std::cout << euclid(x, y);
	return (0);
}