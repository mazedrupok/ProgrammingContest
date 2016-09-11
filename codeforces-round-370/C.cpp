#include <bits/stdc++.h>
using namespace std;
int x, y;
int ara[3];
int res;

int main()
{
	scanf("%d %d", &x, &y);
	ara[0] = ara[1] = ara[2] = y;
	while (1) {
		sort(ara, ara + 3);
		if (ara[0] >= x) break;
		ara[0] = ara[1] + ara[2] - 1;
		res++;
		//printf ("%d %d %d\n", ara[0], ara[1], ara[2]);
	}
	printf("%d\n", res);
	return 0;
}
