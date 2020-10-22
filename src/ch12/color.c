#include <stdio.h>

char color = 'B';

void first(void);
void second(void);

int main(void)
{
	extern char color;

	printf("color in masin() is %c\n", color);
	first();
	printf("color in masin() is %c\n", color);
	second();
	printf("color in masin() is %c\n", color);

	return 0;
}

void first(void)
{
	char color;

	color = 'R';
	printf("color in fisrt() is %c\n", color);
}

void second(void)
{
	color = 'G';
	printf("color in second() is %c\n", color);
}
