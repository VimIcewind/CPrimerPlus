#include <stdio.h>

void butler(void);  /* ansi/iso c函数原型 */

int main(void)
{
	printf("I will summon the butler function.\n");
	butler();
	printf("Yes. bring me some tea and writeable dvds.\n");

	return 0;
}

void butler(void)
{
	printf("You rang, sir?\n");
}
