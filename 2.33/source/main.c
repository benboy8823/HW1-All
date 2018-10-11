#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c, d, e, f;
	printf("Enter total mile driven per day\n");
	scanf_s("%d", &a);
	printf("Enter cost per liter of gasonline\n");
	scanf_s("%d", &b);
	printf("Enter average mile per liter\n");
	scanf_s("%d", &c);
	printf("Enter parking fees per day\n");
	scanf_s("%d", &d);
	printf("Enter tolls per day\n");
	scanf_s("%d", &e);
	f = (a / c)*b + d + e;
	printf("Your cost per day of driving to work is %d", f);

	system("pause");
	return 0;
	
}
