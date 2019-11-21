#include<stdlib.h>
#include<stdio.h>

int addbyone(int &xref)
{
	xref++;
	printf("xref=%d\n",xref);
	return xref;
}
int main(void)
{
	int x = 100;
	int y = addbyone(x);
	printf("x=%d\n", x);
	system("pause");
}

