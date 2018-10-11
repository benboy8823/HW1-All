#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int count = 1;
	int num = 5;
	int space = 4;
	for (int a = 0; a < num; a++)
	{
		if (space >= 0)
		{
			for (int b = 0; b < space; b++)
			{
				printf(" ");
			}
			space--;
		}
		for (int c = 0; c < count; c++)
		{
			printf("*");
		}
		count = count + 2;
		printf("\n");
	}
	system("pause");
	return 0;
}
