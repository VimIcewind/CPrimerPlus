/* funds2.c -- 传递指向结构的指针 */
#include <stdio.h>

#define FUNDLEN 50

struct funds {
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
};

double sum(const struct funds *);

int main(void)
{
	struct funds stan = {
		"Garlic-Melon Bank",
		4032.27,
		"Lucky's Savings and Loan",
		8543.94
	};

	printf("Stand has a total of $%.2f.\n",
		sum(&stan));

	return 0;
}

/* 两个double类型的数相加 */
double sum(const struct funds *money)
{
	return (money->bankfund + money->savefund);
}
