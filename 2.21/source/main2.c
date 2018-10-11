#include<stdio.h>
#include<stdlib.h>



int main(void)
{
	int up = 3;
	int down = 1;
	int space = 5;
	for (int a = 0; a < 9; a++)
	{
		if (up > 0)
		{
			for (int b = 0; b < up; b++)
			{
				printf(" ");
			}
			up -= 2;
		}
		if (a == 0 || a == 8)
		{
			if (a == 8)
			{
				for (int f = 0; f < down; f++)
				{
					printf(" ");
				}
			}
			printf("*");
		}
		if (a > 6 && a != 8)
		{
			space = 5;
			for (int d = 0; d < down; d++)
			{
				printf(" ");
			}
			down += 2;
			printf("*");
			for (int e = 0; e < space; e++)
			{
				printf(" ");
			}
		}
		printf("*");
		if (a > 0 && a < 7)
		{
			for (int c = 0; c < space; c++)
			{
				printf(" ");
			}
			printf("*");
			space = 7;
		}

		printf("\n");
	}
	system("pause");
	return 0;
}
