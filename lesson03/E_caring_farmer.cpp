#include <iostream>

using namespace std;

class Horses
{
public:
	int	num;
	int value;
	int current_pos;
	int desired_pos;
};

bool	isLastComb(int *z, Horses l[], int n, int k)
{
	while (k-- >= 0)
	{
		if (l[k].current_pos != l[k].desired_pos)
		{
			setNewIter();
			return (false);
		}
		k--;
	}
	return (true);
}


void	printArr(int arr[], int n)
{
	for (int j = 0; j<n; ++j)
	{
		if (arr[j] == -1)
			std::cout << 'X' << " ";
		else
			std::cout << arr[j] << " ";
	}
	std::cout << std::endl;
}

bool	setNewIter(int *z, Horses l[], int n, int k)
{

// [0][-1][1][-1][-1][2]


	/*
	 * возьми следующий элемент
	 * он на своём месте?
	 * нет
	 * переставь его на 1 вперёд
	 * возьми предыдущий элемент
	 * переставь его на 1 перед следующим
	 * пока не дойдёшь до k-1 повторяй
	 */
}

int		main()
{
	int n, k;
	int		i = 0;

	std::cin >> n;
	std::cin >> k;
	int z[n];
	Horses l[k];

	while (i < n)
	{
		std::cin >> z[i];
		i++;
	}
	i = 0;
	while (i < k)
	{
		l[i].current_pos = i;
		l[i].num = i;
		l[i].value = z[i];
		l[i].desired_pos = i + n - k;
		i++;
	}
	i = 0;
	printArr(z, n);
	int elem = k-1; // беру номер последней лошадки (2)
	int pos_elem = elem; // беру текущую позицию лошадки (2) в массиве загонов и дублирующем массиве загонов
	int diff = n - k; // считаю разницу между загонами и лошадьми чтобы итерироваться

	// проверка на последнюю комбинацию, чтобы закончить цикл. Это когда все лошадки стоят на последних местах массива
	// [-1][-1][-1][0][1][2]
	while (!isLastComb(z, l, n, k))
	{
		set_new_iter(z, l, n, k);
		// [0][1][2][-1][-1][-1]
		// [0][1][-1][2][-1][-1]
		// [0][1][-1][-1][2][-1]
		// [0][1][-1][-1][-1][2]
		while (dubl[elem + diff] != elem) //идём пока лошадка (2) не дойдёт до конца
		{
			dubl[pos_elem++] = -1;
			dubl[pos_elem] = elem;
			l[elem] = z[pos_elem];
			printArr(z, n);
		}
		// как перейти теперь к следующей комбинации?
		// [0][-1][1][2][-1][-1]

		/*
		 * возьми следующий элемент
		 * он на своём месте?
		 * нет
		 * переставь его на 1 вперёд
		 * возьми предыдущий элемент
		 * переставь его на 1 перед следующим
		 * пока не дойдёшь до k-1 повторяй
		 */
	}



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