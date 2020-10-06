/* pound.c -- 定义一个带参数的函数 */
#include <stdio.h>

void pound(int n);

int main(void)
{
	int times = 5;
	char ch = '!';
	float f = 6.0f;

	pound(times);  // int 类型参数
	pound(ch);     // 和pound((int)ch);相同
	pound(f);      // 和pound((int)f);相同

	return 0;
}

void pound(int n)
{
	while (n-- > 0)
		printf("#");
	printf("\n");
}
