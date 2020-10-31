#include <iostream>

/* This program reads n > 2 of stalls and 1 < k < n horses.
 * Every stall has a coordinate > 0.
 * At one stall could be assigned only one horse.
 * The goal is to spread horses in stalls to get
 * max possible average range between horses.
 * This is a slow solution.
 * Program checks all possible combinations and gets value.
 * Binomial coefficient.
 *
 * input example:	6 3
 * 					2 5 7 11 15 20
 *
 * output example:	9 */

using namespace std;

class Horses
{
public:
	int	num;
	int value;
	int current_pos;
	int desired_pos;
};

int 	minArrElem(const int arr[], int len)
{
	int tmp;

	tmp = arr[--len];
	while (len--)
	{
		if (arr[len] < tmp)
			tmp = arr[len];
	}
	return (tmp);
}

int		getBest(Horses l[], int k, int best)
{
	int tmp = 0;
	int vals[k - 1];

	int i = k - 2;
	int k2 = k - 1;

	while (i >= 0)
	{
		vals[i] = l[k2].value - l[k2 - 1].value;
		k2--;
		i--;
	}
	tmp = minArrElem(vals, sizeof(vals)/sizeof(int));
	if (tmp > best)
		return (tmp);
	return (best);

}

bool	isLastComb(const int z[], Horses l[], int n, int k)
{
	int	i = k - 1;

	while (i >= 0)
	{
		if (l[i].current_pos != l[i].desired_pos)
		{
			l[i].current_pos += 1;
			l[i].value = z[l[i].current_pos];
			i++;
			while (i < k)
			{
				l[i].current_pos = l[i - 1].current_pos + 1;
				l[i].value = z[l[i].current_pos];
				i++;
			}
			return (false);
		}
		i--;
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

int		isHorsePos(Horses l[], int i, int k)
{
	while (k--)
	{
		if (l[k].current_pos == i)
			return (l[k].num);
	}
	return (-1);
}

void	printHorses(Horses l[], int n, int k)
{
	int i = 0;
	int num;

	while (n > 0)
	{
		if ((num = isHorsePos(l, i, k)) != -1)
			cout << "[" << num << "]";
		else
			cout << "[.]";
		i++;
		n--;
	}
	cout << endl;
}

int		main() {
	int n, k;
	int i = 0;

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

	while (i < k) {
		l[i].current_pos = i;
		l[i].num = i;
		l[i].value = z[i];
		l[i].desired_pos = i + n - k;
		i++;
	}
	i = 0;
	int best = 0;

	i = k;
	best = getBest(l, k, best);
	while (!isLastComb(z, l, n, k))
	{
		/*
		iterate...
		[0][1][2][-1][-1][-1]
		[0][1][-1][2][-1][-1]
		[0][1][-1][-1][2][-1]
		[0][1][-1][-1][-1][2]
		 */
		best = getBest(l, k, best);
		while (l[k - 1].current_pos != l[k - 1].desired_pos) {
			l[k - 1].current_pos += 1;
			l[k - 1].value = z[l[k - 1].current_pos];
			best = getBest(l, k, best);
		}
	}
	cout << best;
	return (0);
}
