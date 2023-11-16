#include <stdio.h>
int main()
{
	static int a[5] = {2,3,4,1,3};
	int i,m,t,n;
	for (m = 0; m < 4; m++)
	{
		for (i = 0; i < 4 - m; i++)
			if (a[i + 1] < a[i])
			{
				t = a[i + 1];
				a[i + 1] = a[i];
				a[i] = t;
			};
		for (n = 0; n <= 4; n++)
		{
			printf("%d", a[n]);
		};
		printf("\n");
	};
}