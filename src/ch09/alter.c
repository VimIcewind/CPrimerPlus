#include <stdio.h>

void alter(int *x, int *y)
{
	*x = *x + *y;
	*y = *x - *y - *y;
}

int main(void)
{
	int a = 3, b = 2;

	printf("a = %d, b= %d\n", a, b);
	alter(&a, &b);
	printf("a = %d, b= %d\n", a, b);

	return 0;
}
