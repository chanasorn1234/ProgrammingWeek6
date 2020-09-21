#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x[3], max;

	scanf("%d", &x[0]);

	scanf("%d", &x[1]);

	scanf("%d", &x[2]);
	max = x[0];
	for (int i = 0; i <= 2; i++)
	{
		if (x[i] > max)
		{
			max = x[i];
		}


	}
	printf("MAX : %d", max);

	return 0;
}