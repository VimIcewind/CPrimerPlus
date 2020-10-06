/* summing.c -- 根据用户键入的整数求和 */
#include <stdio.h>

int main(void)
{
	long num;
	long sum = 0L;

	printf("Please enter an integer to be summed ");
	printf("(q to quit): ");
	while (scanf("%ld", &num) == 1) {
		sum = sum + num;
		printf("Please enter next integer (q to quit): ");
	}
	printf("Those integers sum to %ld.\n", sum);

	return 0;
}
