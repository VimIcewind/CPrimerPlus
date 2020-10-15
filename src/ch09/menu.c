#include <stdio.h>

void show_menu(void)
{
	printf("Please choose one of the following:\n");
	printf("1) copyfiles            2) move files\n");
	printf("3) remove files         4) quit\n");
}

int check_id(int min, int max)
{
	int id;

	while (scanf("%d", &id) == 1) {
		if (id < min || id > max) {
			show_menu();
			continue;
		}
		return id;
	}
	return 4;
}

int main(void)
{
	show_menu();
	printf("You choosed %d.\n", check_id(1, 4));

	return 0;
}
