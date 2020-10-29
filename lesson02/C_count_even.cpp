#include <iostream>

int		main()
{
	int num = 0;
	int res = 0;

	std::cin >> num;
	while (num != 0)
	{
		if (num % 2 == 0)
		{
			res++;
		}
		std::cin >> num;
	}
	std::cout << res;
}
