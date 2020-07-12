#include <stdio.h>

int main(void)
{
	double inch;
	double cm;

	printf("How many inch do you have?\n");
	scanf("%lf", &inch);
	cm = 2.54 * inch;
	printf("So you have %lf cm!\n", cm);

	return 0;
}
