/* bases.c -- 以十进制、八进制、十六进制打印十进制数100 */
#include <stdio.h>

int main(int argc, char *argv[])
{
	int x = 100;

	printf("dec = %d, octol = %o, hex = %x\n", x, x, x);
	printf("dec = %d, octol = %#o, hex = %#x\n", x, x, x);

	return 0;
}
