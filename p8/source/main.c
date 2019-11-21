#include<stdlib.h>
#include<stdio.h>
#define size 10

int main(void)
{
	int n[size] = { 19,3,15,7,11,9,13,5,17,1 };
	int i, j;

	printf("%s%13s%17s\n", "Element", "Value", "Histogram");

	for ( i = 0; i < size; i++)
	{
		printf("%7d%13d ", i, n[i]);
		for ( j = 0; j < n[i]; j++)
		{
			printf("%c", '*');
		}
		printf("\n");
	}
	system("pause");
	return 0;
}