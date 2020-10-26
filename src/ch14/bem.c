#include <stdio.h>

struct name {
	char first[20];
	char last[20];
};

struct bem {
	int limbs;
	struct name title;
	char type[30];
};

void showbem(struct bem *bm);

int main(void)
{
	struct bem *pb;
	struct bem deb = {
		6,
		{"Berbnazel", "Gwolkapwolk"},
		"Arcturan"
	};

	pb = &deb;

	printf("%d\n", deb.limbs);
	printf("%s\n", pb->type);
	printf("%s\n", pb->type + 2);

	printf("%s\n", deb.title.last);
	printf("%s\n", (*pb).title.last);

	showbem(pb);

	return 0;
}

void showbem(struct bem *bm)
{
	printf("%s %s is a %d-limbed %s.\n", (*bm).title.first, (*bm).title.last, (*bm).limbs, (*bm).type);
}
