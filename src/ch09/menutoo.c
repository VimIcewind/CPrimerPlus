#include <stdio.h>

void showmenu(void);

int getchoice(int, int);

int main(void)
{
	int res;

	showmenu();
	while ((res = getchoice(1, 4)) != 4) {
		printf("I like choice %d.\n", res);
		showmenu();
	}
	printf("Bye!\n");

	return 0;
}

void showmenu(void)
{
	printf("Please choose one of the following:\n");
	printf("1) copyfiles            2) move files\n");
	printf("3) remove files         4) quit\n");
	printf("Enter the number of your choice:\n");
}

int getchoice(int low, int high)
{
	int ans;
	int good;

	good = scanf("%d", &ans);
	while (good == 1 && (ans < low || ans > high)) {
		printf("%d is not a valid choice; try again\n", ans);
		showmenu();
		scanf("%d", &ans);
	}

	if (good != 1) {
		printf("Non-numeric input.");
		ans = 4;
	}

	return ans;
}
