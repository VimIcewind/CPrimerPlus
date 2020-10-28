// variadic.c -- 变参宏
#include <stdio.h>
#include <math.h>

#define PR(X, ...) printf("Messge " #X ": " __VA_ARGS__)

int main(int argc, const char *argv[])
{
	double x = 48;
	double y;

	y = sqrt(x);
	PR(1, "x = %g\n", x);
	PR(2, "x = %.2f, y = %.4f\n", x, y);

	return 0;
}
