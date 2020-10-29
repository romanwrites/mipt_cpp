#include <iostream>
#include <cmath>

/* Write a program to find hypotenuse with two sides */

int		main()
{
	int	x, y;

	std::cout << "> ";
	std::cin >> x;
	std::cout << "> ";
	std::cin >> y;

	std::cout << std::endl << "res: " << std::sqrt(x * x + y * y) << std::endl;
}
