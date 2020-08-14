#include <stdio.h>
int main()
{
	int x, y, z, sum;
	x = y = z = 1;
	sum = 0;
	for (z = 1; z <= 4000000; z = x + y)
	{
		if (z % 2 == 0)
		{
			sum += z;
		}
		x = y;
		y = z;
	}
	printf("%d\n", sum);
	return 0;
}