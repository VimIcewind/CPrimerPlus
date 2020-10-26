#include <stdio.h>

#define MLEN 10
#define SLEN 4

struct month {
	char name[MLEN];
	char shortname[SLEN];
	int days;
	int monumb;
};

struct month months[12] = {
	{"January", "jan", 31, 1},
	{"February", "feb", 28, 2},
	{"March", "mar", 31, 3},
	{"April", "apr", 30, 4},
	{"May", "may", 31, 5},
	{"June", "jun", 30, 6},
	{"July", "jul", 31, 7},
	{"August", "aug", 31, 8},
	{"September", "sep", 30, 9},
	{"October", "oct", 31, 10},
	{"November", "nov", 30, 11},
	{"December", "dec", 31, 12}
};

int days(int month)
{
	int index, total;
	if (month < 1 || month > 12)
		return (-1);
	else {
		for (index = 0, total = 0; index < month; index++)
			total += months[index].days;
		return total;
	}
}

int main(void)
{
	int mon;
	int tot;

	printf("Please enter the month 1-12:\n");
	while (scanf("%d", &mon) == 1) {
		tot = days(mon);
		if (tot != -1)
			printf("There are %d days.\n", tot);
		else
			printf("Please enter the month 1-12:\n");
	}

	return 0;
}
