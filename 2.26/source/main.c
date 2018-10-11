#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;
	int num2;

	printf("Enter two integers,and I will tell you\n");
	printf("whether the first number is a multiple of the second\n");

	scanf_s("%d %d", &num1, &num2);
	if (num1%num2 == 0)
	{
		printf("%d is a multiple of %d", num1, num2);
	}
	else
	{
		printf("%d is not a multiple of %d", num1, num2);
	}
	system("pause");
	return 0;
}