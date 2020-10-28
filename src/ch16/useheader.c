// useheader.c -- 使用 names_st 结构
#include <stdio.h>
#include "names_st.h"
// 记住要链接 names_st.c

int main(void)
{
	names candidate;

	get_names(&candidate);
	printf("Let's welcome ");
	show_names(&candidate);
	printf(" to this program!\n");

	return 0;
}
