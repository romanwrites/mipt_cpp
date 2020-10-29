#include <iostream>

/* Count how many seconds before the alarm goes off */

using namespace std;

int		main()
{
	int hc, mc, sc;
	scanf("%d:%d:%d", &hc, &mc, &sc);
	int ha, ma, sa;
	scanf("%d:%d:%d", &ha, &ma, &sa);
	hc *= 3600;
	mc *= 60;
	ha *= 3600;
	ma *= 60;


	int curSec = hc + mc + sc;
	int alSec = ha + ma + sa;
	if (alSec < curSec)
		cout << alSec + 24 * 3600 - curSec;
	else
		cout << alSec -  curSec;
}