/* floatcnv.c -- 不匹配的浮点型转换 */
#include <stdio.h>

int main(void)
{
	float n1 = 3.0;
	double n2 = 3.0;
	long n3 = 2000000000;
	long n4 = 1234567890;

	printf("sizeof(char) is %zd\n", sizeof(char));
	printf("sizeof(short) is %zd\n", sizeof(short));
	printf("sizeof(int) is %zd\n", sizeof(int));
	printf("sizeof(long) is %zd\n", sizeof(long));
	printf("sizeof(long long) is %zd\n", sizeof(long long));
	printf("sizeof(float) is %zd\n", sizeof(float));
	printf("sizeof(double) is %zd\n", sizeof(double));
	printf("sizeof(long double) is %zd\n", sizeof(long double));

	printf("%.1e %.1e %.1e %.1e\n", n1, n2, n3, n4);
	printf("%ld %ld\n", n3, n4);
	printf("%ld %ld %ld %ld\n", n1, n2, n3, n4);

	return 0;
}
