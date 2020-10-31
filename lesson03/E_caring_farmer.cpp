#include <iostream>

/*  */

// int		find_best(int *z, int *l, int best, int k, int n)
// {
// 	if (z[n] == l[k] && z[n - 1] == l[k - 1] && z[n - 2] == l[k - 2])
// 		return (best);
// 	int	new_best;
// 	int i = 0;
// 	new_best = l[i] - l[i + 1];
// 	while (l[i + 1] != 0)
// 	{
// 		if (new_best > l[i] - l[i + 1])
// 			new_best = l[i] - l[i + 1];
// 		i++;
// 	}
// 	return (0);
// }



// int     comb(int a = 0, int b = 1, int c = 2)
// {
//         std::cout << a << " " << b << " " << c << '\n';

//         if (c % 6 != 0)
//             return comb(a, b, c + 1);
//         else if (c % 6 == 0 && b % 5 != 0)
//             return comb(a, b + 1, b + 2);
//         else if (c % 6 == 0 && b % 5 == 0 && (a % 4 != 0 || a == 0))
//             return comb(a + 1, a + 2, a + 3);
//         else
//             return 0;
// }

bool	isLastComb(int *z, const int *dubl, int *l, int n, int k)
{
	while (k > -1)
	{
		if (dubl[n - 1] != k - 1)
			return (false);
		k--;
		n--;
	}
	return (true);
}

void	print_arr(int *dubl, int n)
{
	for (int j = 0; j<n; ++j)
	{
		if (dubl[j] == -1)
			std::cout << 'X' << " ";
		else
			std::cout << dubl[j] << " ";
	}
	std::cout << std::endl;
}

int		main()
{
	int n, k;
	int		i = 0;
	int		*z, *l, *dubl;

	std::cin >> n;
	std::cin >> k;
	z = (int *)malloc(sizeof(int) * (n));
	l = (int *)malloc(sizeof(int) * (k));
	dubl = (int *)malloc(sizeof(int) * (n));
	while (i < n)
	{
		std::cin >> z[i];
		i++;
	}
	i = 0;
	while (i < k)
	{
		l[i] = z[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		if (i < k)
			dubl[i] = i;
		else
			dubl[i] = -1;
		i++;
	}
	int elem = k-1;
	int pos_elem = elem;
	int diff = n - k;
	print_arr(dubl, n);
	while (!isLastComb(z, dubl, l, n, k))
	{
		while (dubl[elem + diff] != elem)
		{
			dubl[pos_elem++] = -1;
			dubl[pos_elem] = elem;
			l[elem] = z[pos_elem];
			print_arr(dubl, n);
		}
		break;
//		if (isLastComb(z, dubl, l, n, k))
//			break ;
//		if (elem > 0)
//			elem--;
//		while (elem > 0)
//		{
//			if (!isRightPlace(z, dubl, l, n, k, elem))
//			{
//				dubl[pos_elem++] = -1;
//				dubl[pos_elem] = elem;
//				while (elem < k)
//				{
//					elem <
//					elem++;
//				}
//			}
//
//		}

//		count_best();
//		set_new_iter();
	}
	// std::cout << find_best(z, l, best, k, n);
	free(z);
	free(dubl);
	free(l);
	return (0);
}
/*
 * 	6 3
	2 5 7 11 15 20
 */
//рекурсивно подставлять и высчитывать максимальное
//передавать максимальное в функцию подстановки, если могу подставить иначе — подставлять и смотреть меньше или больше
// если меньше, подставлять иначе, пока не достигну 0
// колич
/*
идея создать дублирующий массив
подставлять туда номера лошадей
они уже пронумерованы индексами

2 1
2 2
3 3
1 1
[2][40][41][60][61][62]

[X][X][X][o][o][o]
[X][X][o][X][o][o]
[X][X][o][o][X][o]
[X][X][o][o][o][X]

[X][o][X][X][o][o]
[X][o][X][o][X][o]
[X][o][X][o][o][X]

[X][o][o][X][X][o]
[X][o][o][X][o][X]

[X][o][o][o][X][X]

[o][X][X][X][o][o]
[o][X][X][o][X][o]
[o][X][X][o][o][X]

[o][X][o][X][X][o]
[o][X][o][X][o][X]

[o][X][o][o][X][X]

[o][o][X][X][X][o]
[o][o][X][X][o][X]

[o][o][X][o][X][X]

[o][o][o][X][X][X]





[X][X][X][o][o][o]
[X][X][o][X][o][o]
[X][X][o][o][X][o]
[X][X][o][o][o][X]
[X][o][X][X][o][o]
[X][o][X][o][X][o]
[X][o][X][o][o][X]
[X][o][o][X][X][o]
[X][o][o][X][o][X]
[X][o][o][o][X][X]
[o][X][X][X][o][o]
[o][X][X][o][X][o]
[o][X][X][o][o][X]
[o][X][o][X][X][o]
[o][X][o][X][o][X]
[o][X][o][o][X][X]
[o][o][X][X][X][o]
[o][o][X][X][o][X]
[o][o][X][o][X][X]
[o][o][o][X][X][X]







[X][X][X][X][o][o]
[X][X][X][o][X][o]
[X][X][X][o][o][X]
[X][X][o][X][X][o]
[X][X][o][X][o][X]
[X][X][o][o][X][X]
[X][o][X][X][X][o]
[X][o][X][X][o][X]
[X][o][X][o][X][X]
[X][o][o][X][X][X]
[o][X][X][X][X][o]
[o][X][X][X][o][X]
[o][X][X][o][X][X]
[o][X][o][X][X][X]
[o][o][X][X][X][X]

*/