#include <stdio.h>

int main(void)
{
	int ch;
	int ccnt = 0;

	while ((ch = getchar()) != EOF)
		ccnt++;
	printf("There are %d characters.\n", ccnt);

	return 0;
}
