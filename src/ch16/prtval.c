// prtval.c -- 使用宏函数来打印两个表达式的值
#include <stdio.h>

#define PRTVAL(X, Y) printf(#X " is %d and " #Y " is %d\n", (X), (Y))

int main(void)
{
	PRTVAL(3+4, 4*12);

	return 0;
}
