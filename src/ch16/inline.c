#include <stdio.h>

inline static void eatline()
{
	while (getchar() != '\n')
		continue;
}

int main(void)
{
	eatline();
	printf("main() is at%p\n", eatline);
	printf("eatline is at%p\n", eatline);

	return 0;
}
