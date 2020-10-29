#include <iostream>

/* Find out if a given number is Prime */

bool is_prime(int n) {
	if (n == 1)
		return false;
	if (n % 2 == 0 && n > 2)
		return false;
	else if (n == 2 || n == 3)
		return true;
	int i = 3;

	while (i < n / 2)
	{
		if (n % i == 0)
			return false;
		i++;
	}
	return true;
}

int		main()
{
	int n;

	std::cin >> n;
	if (is_prime(n))
		std::cout << 1;
	else
		std::cout << 0;
}
