/* fgets2.c -- 使用 fgets() 和 fputs() */
#include <stdio.h>

#define STLEN 10

int main(void)
{
	char words[STLEN];

	puts("Enter a string (empty line to quit):");
	while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
		fputs(words, stdout);
	puts("Done.");

	return 0;
}
