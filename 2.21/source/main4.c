#include<stdio.h>
#include<stdlib.h>


int main()
{
	int downleft = 1;
	int downmiddle = 5;
	int left = 3;
	int middle = 1;
	for (int a = 0; a < 9; a++)
	{
		if (a == 0)
		{
			for (int b = 0; b <= left; b++)
			{
				printf(" ");
			}
			printf("*");
		}
		else if (a > 0 && a < 5)
		{
			for (int c = 0; c < left; c++)
			{
				printf(" ");
			}
			left--;
			printf("*");
			for (int d = 0; d < middle; d++)
			{
				printf(" ");
			}
			middle += 2;
			printf("*");
		}
		else if (a > 4 && a < 8)
		{
			for (int e = 0; e < downleft; e++)
			{
				printf(" ");
			}
			downleft++;
			printf("*");
			for (int f = 0; f < downmiddle; f++)
			{
				printf(" ");
			}
			downmiddle -= 2;
			printf("*");
		}
		else if (a == 8)
		{
			for (int b = 0; b < downleft; b++)
			{
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}