/* stack.c -- Stack类型的实现 */
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void InitializeStack(Stack *ps)
{
	ps->top = 0;
}

bool FullStack(const Stack *ps)
{
	if (ps->top == MAXSTACK)
		return true;
	else
		return false;
}

bool EmptyStack(const Stack *ps)
{
	if (ps->top == 0)
		return true;
	else
		return false;
}

bool Push(Item item, Stack *ps)
{
	if (!FullStack(ps)) {
		ps->items[ps->top++] = item;
		return true;
	}
	else
		return false;
}

bool Pop(Item *pitem, Stack *ps)
{
	if (!EmptyStack(ps)) {
		*pitem = ps->items[--ps->top];
		return true;
	} else
		return false;
}
