#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	printf("Enter an integer, and I will tell it's even or odd\n");

	scanf_s("%d", &num);

	if (num % 2 == 0)
	{
		printf("%d is evem\n", num);
	}
	else
	{
		printf("%d is odd\n", num);
	}
	system("pause");
	return 0;
}