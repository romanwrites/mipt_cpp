#include <iostream>
#include <sstream>

bool	is_boss(std::string num)
{
	if (num.compare("A999AA") == 0)
		return true;
	else
		return false;
}

int		penalty(std::string speed, std::string num)
{
	int car_speed = 0;
	std::stringstream num_speed(speed);
    num_speed >> car_speed;
	std::string car = num.substr(1, 3);

	if (car_speed > 60)
	{
		if (car[0] == car[1] && car[0] == car[2])
			return (1000);
		else if (car[0] == car[1] || car[1] == car[2] || car[0] == car[2])
			return (500);
		return (100);
	}
	return (0);
}

int		main()
{
	using namespace std;

	string	driver;
	string	speed;
	string	num;
	int		money = 0;
	getline(cin, driver);
	speed = driver.substr(0, driver.find(" "));
	num = driver.substr(driver.find(" ") + 1, 6);
	while (!is_boss(num)) {
		money += penalty(speed, num);
		getline(cin, driver);
		speed = driver.substr(0, driver.find(" "));
		num = driver.substr(driver.find(" ") + 1, 6);
	}
	cout << money;
	return (0);
}
