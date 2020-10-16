/* evens.c -- 给数组的元素赋值 */
#include <stdio.h>

#define SIZE 50

int main(void)
{
	int counter, evens[SIZE];

	for (counter = 0; counter < SIZE; counter++) {
		evens[counter] = 2 * counter;
		printf("evens[%d] = %d\n", counter, evens[counter]);
	}


	return 0;
}
