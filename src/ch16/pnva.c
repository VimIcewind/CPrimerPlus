#include <stdio.h>

#define PNVA(X) printf("name: "#X "; value: %d; address: %p", X, &X)

int main(void)
{
	int fop = 23;

	PNVA(fop);

	return 0;
}
