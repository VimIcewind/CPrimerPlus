#include <stdio.h>

int max(int x, int y, int z)
{
	int temp;

	temp = x > y ? x : y;
	temp = temp > z ? temp : z;

	return temp;
}

int main(void)
{
	int x, y, z;

	x = 3;
	y = 4;
	z = 5;

	printf("Max of %d, %d, %d is %d.\n", x, y, z, max(x, y, z));

	return 0;
}
