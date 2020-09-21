#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x;

	scanf("%d", &x);
	if (x >= 90) { printf("A"); }
	if (x >= 85 && x < 90) { printf("B+"); }
	if (x >= 80 && x < 85) { printf("B"); }
	if (x >= 75 && x < 80) { printf("C+"); }
	if (x >= 70 && x < 75) { printf("C"); }
	if (x >= 65 && x < 70) { printf("D+"); }
	if (x >= 60 && x < 65) { printf("D"); }
	if (x < 60) { printf("F"); }


	return 0;
}