#include<stdio.h>
void main()
{
	int Q,A,B,C;
	Q=20;
	A=Q*(Q+1)/2;
	B=Q*(Q+1);
	C=Q*Q;

	printf("Sum of first %d natural numbers \t = %d", Q,A );
	printf("\n\nsum of first %d even natural numbers \t = %d", Q,B);
	printf("\n\nsum od first %d odd natural numbers \t = %d", Q,C);
}
