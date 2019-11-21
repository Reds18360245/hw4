#include<stdlib.h>
#include<stdio.h>
#define std 3
#define exams 4

int minimum(const int grades[][exams], int pupils, int tests);
int maximum(const int grades[][exams], int pupils, int tests);
double ave(const int grades[], int tests);
void printArray(const int grades[][exams], int pupils, int tests);

int main(void)
{
	int student;
	const int studentGrades[std][exams] =
	{ {77,68,86,73},
	  {96,87,89,78},
	  {70,90,86,81} };

	printf("The array is:\n");
	printArray(studentGrades, std, exams);

	printf("\n\nLowest grade: %d\nHighest grade: %d\n", minimum(studentGrades, std, exams), maximum(studentGrades, std, exams));
	for ( student = 0; student < std; student++)
	{
		printf("The averaage grade for student %d is %.2f\n", student, ave(studentGrades[student], exams));
	}

	system("pause");
	return 0;
}

void printArray(const int grades[][exams], int pupils, int tests)
{
	int i, j;
	printf("                 [0]  [1]  [2]  [3]");

	for ( i = 0; i < pupils; i++)
	{
		printf("\nstudentGrades[%d] ", i);
		for ( j = 0; j < tests; j++)
		{
			printf("%-5d", grades[i][j]);
		}
	}
}

int minimum(const int grades[][exams], int pupils, int tests)
{
	int i, j;
	int lowGrade = 100;

	for ( i = 0; i < pupils; i++)
	{
		for (j = 0; j < tests; j++)
		{
			if (grades[i][j]<lowGrade)
			{
				lowGrade = grades[i][j];
			}
		}
	}
	return lowGrade;
}

int maximum(const int grades[][exams], int pupils, int tests)
{
	int i, j;
	int highGrade = 0;

	for (i = 0; i < pupils; i++)
	{
		for (j = 0; j < tests; j++)
		{
			if (grades[i][j] > highGrade)
			{
				highGrade = grades[i][j];
			}
		}
	}
	return highGrade;
}

double ave(const int setOfGrades[], int tests)
{
	int  j;
	int total = 0;

	for (j = 0; j < tests; j++)
	{
		total += setOfGrades[j];
	}
	return(double)total / tests;
}