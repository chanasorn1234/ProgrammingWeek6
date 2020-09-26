#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x;
	printf("Enter Number: ");
	scanf("%d", &x);
	printf("\n");
	printf("x");
	printf("     ");
	printf("x^2\n\n");
	for (int i = 1; i <= x; i++)
	{
		printf("%d", i);
		printf("      ");
		printf("%d\n", i * i);
	}


	
	
	return 0;
}