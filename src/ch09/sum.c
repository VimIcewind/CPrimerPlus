#include <stdio.h>

int sum(int x, int y)
{
	return x + y;
}

int main(void)
{
	int x, y, s;

	x = y = 1;
	s = sum(x, y);
	printf("%d + %d = %d\n", x, y, s);

	return 0;
}
