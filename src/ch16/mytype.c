// mytype.c
#include <stdio.h>

#define MYTYPE(X) _Generic((X),\
	int: "int",\
	float: "float",\
	double: "double",\
	default: "other"\
)

int main(void)
{
	int d = 5;

	printf("%s\n", MYTYPE(d));	// d 是 int 类型
	printf("%s\n", MYTYPE(2.0*d));	// 2.0 * d 是 double 类型
	printf("%s\n", MYTYPE(3L));	// 3L 是 long 类型
	printf("%s\n", MYTYPE(&d));	// &d 的类型是 int *

	return 0;
}
