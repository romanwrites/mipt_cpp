#include <iostream>

/* Generate nth prime number */

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

int		find_next_prime(int i)
{
	while (!is_prime(i))
	{
		i++;
	}
	return (i);
}

int		main()
{
	long int n;
	long int i = 2;

	std::cin >> n;
	while (n > 0)
	{
		i = find_next_prime(i);
		i++;
		n--;
	}
	std::cout << i - 1;
}
