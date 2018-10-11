#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;
	int num2;
	int num3;

	printf("Enter three integer, and I will tell the largest and the smallest = \n");

	scanf_s("%d %d %d", &num1, &num2, &num3);
	if (num1 > num2 && num1 > num3)
	{
		printf("%d is the largest\n", num1);
	}
	if (num2 > num1 && num2 > num3)
	{
		printf("%d is the largest\n", num2);
	}
	if (num3 > num1 && num3 > num2)
	{
		printf("%d is the largest\n", num3);
	}
	if (num1 < num2 && num1 < num3)
	{
		printf("%d is the smallest\n", num1);
	}
	if (num2 < num1 && num2 < num3)
	{
		printf("%d is the smallest\n", num2);
	}
	if (num3 < num1 && num3 < num2)
	{
		printf("%d is the smallest\n", num3);
	}
	system("pause");
	return 0;
}