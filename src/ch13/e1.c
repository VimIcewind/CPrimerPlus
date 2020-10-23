#include <stdio.h>

int main(void)
{
	FILE *fp;
	int k;

	fp = fopen("gelatin", "w");
	for (k = 0; k < 30; k++)
		fputs("Nanette eats gelatin.\n", fp);
	fclose(fp);

	return 0;
}
