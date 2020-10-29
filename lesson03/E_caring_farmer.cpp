#include <iostream>

/*  */

int		find_best(int *z, int *l, int best, int k, int n)
{
	if (z[n] == l[k] && z[n - 1] == l[k - 1] && z[n - 2] == l[k - 2])
		return (best);
	int	new_best;
	int i = 0;
	new_best = l[i] - l[i + 1];
	while (l[i + 1] != 0)
	{
		if (new_best > l[i] - l[i + 1])
			new_best = l[i] - l[i + 1];
		i++;
	}

}

int		main()
{
	int n, sv, k;
	int		i = 0;
	float	max_spread;
	int		*z, *l;

	std::cin >> n;
	std::cin >> k;
	sv = n;
	z = (int *)malloc(sizeof(int) * (n + 1));
	l = (int *)malloc(sizeof(int) * (k + 1));
	while (sv > 0)
	{
		std::cin >> z[i];
		i++;
		sv--;
	}
	z[i] = 0;
	i = 0;
	while (i < k)
	{
		l[i] = z[i];
		i++;
	}
	l[i] = 0;

	std::cout << find_best(z, l, best, k, n);
	free(z);
	free(l);
	return (0);
}
//рекурсивно подставлять и высчитывать максимальное
//передавать максимальное в функцию подстановки, если могу подставить иначе — подставлять и смотреть меньше или больше
// если меньше, подставлять иначе, пока не достигну 0
// колич