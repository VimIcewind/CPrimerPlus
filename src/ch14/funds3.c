/* funds3.c -- 传递一个结构 */
#include <stdio.h>

#define FUNDLEN 50

struct funds {
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
};

double sum(struct funds moolah);

int main(void)
{
	struct funds stan = {
		"Garlic-Melon Bank",
		4032.27,
		"Lucky's Savings and Loan",
		8543.94
	};

	printf("Stand has a total of $%.2f.\n",
		sum(stan));

	return 0;
}

/* 两个double类型的数相加 */
double sum(struct funds moolah)
{
	return (moolah.bankfund + moolah.savefund);
}

