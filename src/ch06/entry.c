/* entry.c -- 出口条件循环 */
#include <stdio.h>

int main(void)
{
	const int secret_code = 13;
	int code_entered;

	printf("To enter the triskaidekaphobi therapy club,\n");
	printf("please enter the secret code number: ");
	scanf("%d", &code_entered);
	while (code_entered != secret_code) {
		printf("To enter the triskaidekaphobi therapy club,\n");
		printf("please enter the secret code number: ");
		scanf("%d", &code_entered);

	}
	printf("Congratulations! You are cured!\n");

	return 0;
}
