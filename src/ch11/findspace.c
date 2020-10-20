#include <stdio.h>

char *findspace(const char *str)
{
	while (*str != ' ' && *str != '\0')
		str++;
	if (*str == '\0')
		return NULL;
	else
		return (char *)str;
}
