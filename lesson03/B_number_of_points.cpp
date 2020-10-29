#include <iostream>

/* Counting the number of points on a plane */

using namespace std;

int		main()
{
	int x, y;
	int one, two, three, four;
	one = two = three = four;
	int n;
	cin >> n;
	while (n > 0) {
		scanf("%d %d", &x, &y);
		if (x > 0 && y > 0)
			one++;
		else if (x < 0 && y > 0)
			two++;
		else if (x < 0 && y < 0)
			three++;
		else if (x > 0 && y < 0)
			four++;
		n--;
	}
	if (one >= two && one >= three && one >= four)
		cout << "1 " << one;
	else if (two >= three && two >= four)
		cout << "2 " << two;
	else if (three >= four)
		cout << "3 " << three;
	else
		cout << "4 " << four;
}