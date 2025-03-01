#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Showstr(int(*arr)[4]);
void Rightstr(int(*arr)[4]);
int main(void)
{
	int str[4][4] = { 
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16} };
	int i;
	for (i = 0; i < 4; i++)
	{
		Showstr(str);
		Rightstr(str);
	}
	return 0;
}
void Showstr(int(*arr)[4])
{
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%4d", arr[i][j]);
		printf("\n");
	}
	printf("\n");
}
void Rightstr(int(*arr)[4])
{
	int i, j;
	int temp[4][4];

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
			temp[j][3 - i] = arr[i][j];
	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
			arr[i][j] = temp[i][j];
	}
}