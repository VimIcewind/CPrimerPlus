#include <stdio.h>

#define PR_DATE

int main(int argc, const char *argv[])
{
#ifdef PR_DATE
	printf("Date is %s\n", __DATE__);
#endif

	return 0;
}
