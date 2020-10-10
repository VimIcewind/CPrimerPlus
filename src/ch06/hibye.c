#include <stdio.h>

int main(void)
{
	int i = 0;

	while (++i < 4) {
		printf("i = %d ", i);
		printf("Hi! ");
	}
	printf("\ni = %d\n", i);
	do {
		printf("i = %d ", i);
		printf("Bye! ");
	}
	while (i++ < 8);

	return 0;
}
