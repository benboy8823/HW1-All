#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()

{

	int i, a[240] = { 0, 0, 0, 0, 0, 0, 0, 1,
		              0, 0, 0, 0, 0, 0, 1, 0,
					  0, 0, 0, 0, 0, 1, 0, 0,
					  0, 0, 0, 0, 1, 0, 0, 0,
		              1, 1, 1, 1, 0, 0, 0, 0,
	                  0, 0, 0, 0, 1, 0, 0, 0,
		              0, 0, 0, 0, 0, 1, 0, 0,
					  0, 0, 0, 0, 0, 0, 1, 0,
					  0, 0, 0, 0, 0, 0, 0, 1,
					  0, 0, 0, 0, 0, 0, 0, 0,
					  2, 2, 0, 0, 2, 2, 2, 0,
					  2, 2, 0, 2, 2, 0, 0, 2,
					  2, 0, 0, 2, 2, 0, 0, 2,
					  2, 0, 0, 2, 2, 0, 2, 2,
					  0, 2, 2, 2, 0, 0, 2, 2,
					  0, 0, 0, 0, 0, 0, 0, 0,
					  3, 3, 3, 3, 3, 3, 3, 3,
					  0, 0, 0, 0, 3, 0, 0, 0,
					  0, 0, 0, 0, 3, 0, 0, 0,
					  0, 0, 0, 0, 3, 0, 0, 0,
					  0, 0, 0, 0, 3, 0, 0, 0,
					  3, 3, 3, 3, 3, 3, 3, 3,
					  0, 0, 0, 0, 0, 0, 0, 0};
	for(i=0;i<200;i++)

	{
		if (i > 0 && i % 8 == 0)
			printf("\n");
		if (a[i] == 1)
			printf("%s", "Y");
		else if (a[i] == 2)
			printf("%s", "S");
		else if (a[i] == 3)
			printf("%s", "H");
		else
			printf("%s", " ");
	}
		
		
	

	system("pause");
	return 0;

}

