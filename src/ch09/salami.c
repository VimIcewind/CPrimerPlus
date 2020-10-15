#include <stdio.h>

void salami(int num)
{
	int count;

	for (count = 1; count <= num; num--)
		printf(" O salami mio!\n");
}

int main(void)
{
	salami(10);

	return 0;
}
