#include <iostream>

/* Write a program that decomposes a number into Prime factors */

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
	int i = 2;

	std::cin >> n;
	
	if (is_prime(n)) {
		std::cout << n << '\n';
		return (0);
	}
	while (i < n) {
		if (n % 2 == 0 && n % i == 0) {
			std::cout << i << '\n';
			n /= i;
			if (is_prime(n)) {
				std::cout << n << '\n';
				return (0);
			}
			continue ;
		}
		else if (n % 2 != 0 && n % i == 0 && is_prime(i)) {
			std::cout << i << '\n';
			n /= i;
			if (is_prime(n)) {
				std::cout << n << '\n';
				return (0);
			}
			i = 2;
		}
		i++;
	}
	return (0);
}
