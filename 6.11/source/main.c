#include<stdio.h>
#include<stdlib.h>
#define SIZE  10

int main(void)
{
	int num[SIZE]={ 5, 7, 6, 1, 10, 8, 9, 4, 2, 3 };
	int i, j,x;
	for ( i = 0; i < 9; i++)
	{
		for (j = 0; j < 9 - i; j++)
		{
			if (i <	0 && num[8 - i] < num[9 - i])
				break;
			if (num[j]>num[j+1])
			{
				x = num[j + 1];
				num[j + 1] = num[j];
				num[j] = x;
			}
		}
	}
	for ( i = 0; i < 10; i++)
		printf(" %d", num[i]);
	printf("\n");
	system("pause");
	return 0;
}