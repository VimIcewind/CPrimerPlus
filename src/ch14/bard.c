#include <stdio.h>
#include <string.h>

struct fullname {
	char fname[20];
	char lname[20];
};

struct bard {
	struct fullname name;
	int born;
	int died;
};

int main(void)
{
	struct bard willie;
	struct bard *pt = &willie;

	scanf("%d", &willie.born);
	scanf("%d", &pt->born);
	scanf("%s", willie.name.lname);
	scanf("%s", pt->name.lname);
	printf("%c\n", willie.name.fname[2]);
	printf("%zd\n", strlen(willie.name.fname) + strlen(willie.name.lname));

	return 0;
}
