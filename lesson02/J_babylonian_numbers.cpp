#include <iostream>

/*  */

std::string		preappend_chars(long int num, std::string str)
{
	str.insert(0, num % 10, 'v');
	str.insert(0, num / 10, '<');
	str.insert(0, 1, '.');
	return (str);
}

int		main()
{
	using namespace std;

	long int n;
	cin >> n;
	string str;

    while (n / 60 > 0)
    {
		str = preappend_chars(n % 60, str);
        n /= 60;
    }
    str = preappend_chars(n % 60, str);
    if (str[0] == '.')
    	str = str.substr(1, str.size() - 1);
	cout << str;

    return (0);
}
