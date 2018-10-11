#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int wei;
	float hei;
	float BMI;
	printf("Enter your weight(kg) and height(cm), and I will display your BMI\n");
	scanf_s("%d%f", &wei, &hei);

	BMI = wei / pow((hei/100), 2);
	printf("Your BMI is %.1f\n", BMI);

	if (BMI < 18.5)
	{
		printf("Underweight");
	}

	if (BMI>=18.5 && BMI <= 24.9)
	{
		printf("Normal");
	}
	if (BMI >= 24.9 && BMI <= 29.9)
	{
		printf("Overweight");
	}
	if (BMI > 30)
	{
		printf("Obese");
	}
	system("pause");

	return 0;

}