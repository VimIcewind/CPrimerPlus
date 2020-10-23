#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	FILE *fp;
	double d;
	double sum = 0.0;
	int cnt = 0;

	if (argc == 1) {
		fp = stdin;
	} else if (argc == 2) {
		if ((fp = fopen(argv[1], "r")) == NULL) {
			fprintf(stderr, "Can't open %s\n", argv[1]);
			exit(EXIT_FAILURE);
		}
	} else {
		fprintf(stderr, "Usage: %s or %s [filename]\n", argv[0], argv[0]);
		exit(EXIT_FAILURE);
	}

	while (fscanf(fp, "%lf", &d) == 1) {
		sum += d;
		cnt++;
	}
	if (cnt > 0)
		printf("Average of %d values = %f\n", cnt, sum / cnt);
	else
		printf("No valid data.\n");
	fclose(fp);

	return 0;
}
