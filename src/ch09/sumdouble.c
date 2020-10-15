#include <stdio.h>

double sum(double x, double y)
{
	return x + y;
}

int main(void)
{
	double x, y, s;

	x = y = 1.0;
	s = sum(x, y);
	printf("%f + %f = %f\n", x, y, s);

	return 0;
}
