#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x, y,z,i=30;

	printf("Enter the time in hours:	");
	scanf("%d", &x);
	printf("Enter the time in minutes:	");
	scanf("%d", &y);
	printf("Parking fee:	");
	if (x < 1)
	{
		
			printf("free");
		
	}
	else
	{
		if (y>30)
		{
			x++;
			z = x * i;
				printf(" %d baht", z);
		}
		else
		{
			z = x * i;
				printf(" %d baht", z);

		}
	}
	return 0;
}