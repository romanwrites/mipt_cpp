#include <iostream>

bool	is_pow(long long int *powers, long long int n)
{
	int	i = 0;

	while (powers[i] != 0)
	{
		if (n == powers[i])
			return true;
		i++;
	}
	return false;
}

int		main()
{
	long long int	n;
	long long int	powers[100] = {0};
	int i = 0;
	long long int pow = 2;

	std::cin >> n;
	while (pow <= n)
	{
		powers[i] = pow;
		i++;
		pow *= 2;
	}
	if (is_pow(powers, n))
		std::cout << "YES";
	else
	{
		std::cout << "NO";
	}
	return (0);
}
