// partb.c -- 程序的剩余部分
// 与 parta.c 一起编译
#include <stdio.h>

extern int count;

static int total = 0;

void accumulate(int k);

void accumulate(int k)
{
	static int subtotal = 0;

	if (k <= 0) {
		printf("loop cycle: %d\n", count);
		printf("subtotal: %d, total: %d\n", subtotal, total);
		subtotal = 0;
	} else {
		subtotal += k;
		total += k;
	}
}
