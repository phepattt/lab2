#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int A, B, C ;
	printf("Enter first number : ");
	scanf("%d", &A);
	printf("Enter second number : ");
	scanf("%d", &B);
	printf(" Greatest number divisor = ");
	if (A < B)
	{
		C = A;
	}
	else C = B;
	while (A % C != 0 || B % C != 0)
		{
			C = C - 1;
		}
	printf("%d", C);
	return 0;
}