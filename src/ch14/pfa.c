#include <stdio.h>

double sum(double, double);
double diff(double, double);
double times(double, double);
double divide(double, double);

// double (*pfa[4])(double, double) = {sum, diff, times, divide};
typedef double (*pf)(double, double);
pf pfa[4] = {sum, diff, times, divide};

int main(void)
{
	printf("%f\n", pfa[1](10.0, 2.5));
	printf("%f\n", (*pfa[1])(10.0, 2.5));
	
	return 0;
}

double sum(double x, double y)
{
	return x + y;
}

double diff(double x, double y)
{
	return x - y;
}

double times(double x, double y)
{
	return x * y;
}

double divide(double x, double y)
{
	return x / y;
}
