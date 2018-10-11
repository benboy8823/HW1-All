#include<stdio.h>
#include<stdlib.h>


int main(void)
{

	int num = 1;
	int space = 2;
	for (int a = 0; a < 9; a++)
	{
		if (a < 3)
		{
			for (int b = 0; b < space; b++)
			{
				printf(" ");
			}
			for (int c = 0; c < num; c++)
			{
				printf("*");
			}
			space--;
			num += 2;
		}
		else if (a > 2)
		{
			for (int d = 0; d < 2; d++)
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