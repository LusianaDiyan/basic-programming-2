#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include<Windows.h>
using namespace std;

/*
class Box {
public:
	Box() {
		cout << "Constructor called!" << endl;
	}
	~Box() {
		cout << "Destructor called!" << endl;
	}
};
*/
void main()
{
	/*
	double* pvalue = NULL;
	if (!(pvalue = new double))
	{
		cout << "Error: out of memory." << endl;
		exit(1);
	}
	Sleep(5000);
	system("pause");
	*/

	/*
	double *pvalue = NULL;
	pvalue = new double;
	*pvalue = 29494.99;
	cout << "Value pf pvalue :" << *pvalue << endl;
	delete pvalue;

	Sleep(5000);
	*/

	/*
	int i, j;
	int ROW = 5;
	int COL = 8;
	double **pvalue = new double*[ROW];
	for ( i = 0; i < ROW; i++)
	{
		pvalue[i] = new double[COL];
	}

	for (i = 0; i < ROW; i++) {
		for ( j = 0; j < COL; j++)
		{
			pvalue[i][j] = 0.1;
			printf("%.2f\t", pvalue[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < ROW; i++) {
		delete[]pvalue[i];
	}
	delete[] pvalue;

	Sleep(5000);
	*/

	/*
	double* pvalue = NULL;
	if (!(pvalue = new double))
	{
		cout << "Error: out of memory." << endl;
		exit(1);
	}
	pvalue[0] = 1; pvalue[1] = 2;
	cout << pvalue[0] << " " << pvalue[1] << endl;
	pvalue[0] = 0;
	printf("%d %d", pvalue[0], pvalue[1]);

	Sleep(5000);
	*/
	/*
	Box* myBoxArray = new Box[4];
	delete[]myBoxArray;
	Sleep(5000);
	*/

	int i, j;
	int ROW = 2;
	int COL = 3;

	float **pvalue = new float*[ROW];
	float **trans = new float*[COL];
	float **result = new float*[ROW];

	for (i = 0; i < ROW; i++)
	{
		pvalue[i] = new float[COL];
	}

	for (i = 0; i < COL; i++)
	{
		trans[i] = new float[ROW];
	}

	for (i = 0; i < ROW; i++)
	{
		result[i] = new float[COL];
	}

	float angka = 1;
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++)
		{
			pvalue[i][j] = angka;
			printf("%1.f\t", pvalue[i][j]);
			angka++;
		}
		printf("\n");
	}
	printf("\n");

	float angka2 = 1;
	for (i = 0; i < COL; i++) {
		for (j = 0; j < ROW; j++)
		{
			trans[i][j] = pvalue[j][i];
			printf("%1.f\t", trans[i][j]);
			angka2++;
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < ROW; j++) {
			result[i][j] = 0;
			for (int k = 0; k < COL; k++) {
				result[i][j] += pvalue[i][k] * trans[k][j];
			}
		}
	}

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < ROW; j++) {
			printf("%1.f\t", result[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < ROW; i++) {
		delete[]pvalue[i];
	}
	delete pvalue;

	for (i = 0; i < COL; i++) {
		delete[]trans[i];
	}
	delete trans;

	for (i = 0; i < ROW; i++) {
		delete[]result[i];
	}
	delete result;

	Sleep(5000);
}