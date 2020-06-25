#include<stdio.h>
#include<iostream>
#include<stdlib.h>

void main() {
	/*
	int fibo[200] = {};
	fibo[0] = 0;
	fibo[1] = 1;
	int i;

	printf("%d %d ", fibo[0], fibo[1]);

	for (int i = 0; i <= 20; i++)
	{
		fibo[i+2] = fibo[i-0] + fibo[i+1];
		if (fibo[i+2] <= 300)
		{
			printf("%d ", fibo[i + 2]);
		}
	}
	*/

	
	int A[4] = {1, 2, 3, 4};
	int B[4] = {5, 6, 7, 8};
	int C[4];

	printf(" %d %d %d %d \n", A[0], A[1], A[2], A[3]);
	printf(" %d %d %d %d \n", B[0], B[1], B[2], B[3]);

	C[0] = (A[0] * B[0]) + (A[1] * B[2]);
	C[1] = (A[0] * B[1]) + (A[1] * B[3]);
	C[2] = (A[2] * B[0]) + (A[3] * B[2]);
	C[3] = (A[2] * B[1]) + (A[3] * B[3]);
	
	printf(" %d %d %d %d \n", C[0], C[1], C[2], C[3]);
	
	scanf_s(" %d ", A[]);

	for (int i = 0; i < 20; i++)
	{

	}
	
	system("pause");
}