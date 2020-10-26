#include <stdio.h>

struct gas {
	float distance;
	float glas;
	float mpg;
};

struct gas mpgs(struct gas trip)
{
	if (trip.glas > 0)
		trip.mpg = trip.distance / trip.glas;
	else
		trip.mpg = -1.0;
	return trip;
}

void set_mgs(struct gas *ptrip)
{
	if (ptrip->glas > 0)
		ptrip->mpg = ptrip->distance / ptrip->glas;
	else
		ptrip->mpg = -1.0;
}

int main(void)
{
	struct gas idaho = {430.0, 14.08};

	idaho = mpgs(idaho);

	struct gas ohio = {583, 17.6};
	set_mgs(&ohio);

	return 0;
}
