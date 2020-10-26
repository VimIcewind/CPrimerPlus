#include <stdio.h>
#include <string.h>

typedef struct lens { /* lens 描述 */
	float foclen;   /* 焦距长度，单位：mm */
	float fstop;    /* 孔径 */
	char brand[30]; /* 品牌 */
} LENS;

int main(int argc, const char *argv[])
{
	
	//LENS bigEye[10] = {[2] = {500, 2.0, "Remarkatar"}};
	 LENS bigEye[10];

	bigEye[2].foclen = 500;
	bigEye[2].fstop = 2.0;
	strcpy(bigEye[2].brand, "Remarkatar");

	return 0;
}
