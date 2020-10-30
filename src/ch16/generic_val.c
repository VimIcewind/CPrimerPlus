#include <stdio.h>
#include <stdbool.h>

#define VAL(X) _Generic((X),\
	_Bool: "boolean",\
	default: "not boolean"\
)

int main(void)
{
	bool t = true;
	int i;

	printf("%s\n", VAL(t));
	printf("%s\n", VAL(i));

	return 0;
}
