#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUF 256

int main(int argc, const char *argv[])
{
	FILE *fp;
	char ch;
	char line[BUF];

	if (argc != 3) {
		printf("Usage %s char filename\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	ch = argv[1][0];
	if ((fp = fopen(argv[2], "r")) == NULL) {
		printf("Can't open %s\n", argv[2]);
		exit(EXIT_FAILURE);
	}
	while (fgets(line, BUF, fp) != NULL) {
		if (strchr(line, ch))
			fputs(line, stdout);
	}
	fclose(fp);

	return 0;
}

