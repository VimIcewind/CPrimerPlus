#include <stdio.h>
#include "stack.h"

int main(void)
{

	Stack s;
	Stack *ps = &s;
	Item i = 0;
	Item j = 1;
	Item k = 0;
	Item *pj = &j;

	printf("i is %d, j is %d, *pj is %d\n", i, j, *pj);
	InitializeStack(ps);
	Push(i, ps);
	Pop(pj, ps);
	printf("i is %d, j is %d, *pj is %d\n", i, j, *pj);
	Push(1, ps);
	Push(2, ps);
	Push(3, ps);
	Pop(&k, ps);
	printf("%d\n", k);
	Pop(&k, ps);
	printf("%d\n", k);
	Pop(&k, ps);
	printf("%d\n", k);

	return 0;
}
