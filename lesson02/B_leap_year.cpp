#include <iostream>

bool IsLeapYear(int year) 
{
  if (year % 4 == 0 && year % 100 != 0)
    return true;
  else if (year % 4 == 0 && year % 400 == 0)
    return true;
  return false;
}

int		main()
{
	int year;

	std::cin >> year;
	if (IsLeapYear(year))
		std::cout << "YES";
	else
		std::cout << "NO";
}
