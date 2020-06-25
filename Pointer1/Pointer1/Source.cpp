#include <stdio.h>
#include <iostream>
#include <ctime>
using namespace std;

//4.
//const int MAX = 3;

//void getSeconds(unsigned long *par);

// function declaration:
//double getAverage(int *arr, int size);

// function to generate and return random numbers.
/*
int * getRandom()
{
	static int r[10];
	// set the seed
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; ++i)
	{
		r[i] = rand();
		cout << r[i] << endl;
	}
	return r;
}
*/

// function declaration
//void swap(int& x, int& y);

/*
double vals[] = { 10.1, 12.6, 33.1, 24.1, 50.0 };
double &setValues(int i)
{
	return vals[i]; // return a reference to the ith element
}
*/

int pilihan;
void luas(int& p, int& l) {
	
	if (pilihan == 1)
	{
		p = p * l;
	}
	else if (pilihan == 2)
	{
		p = p * p;
	}
	else if (pilihan == 3)
	{
		p = (p * l) / 2;
	}
	else if (pilihan == 4)
	{
		p = 22 * p * p / 7;
	}
	else {
		printf("Not Found");
	}
}

int main()
{
	int panjang, lebar;
	printf("Pilihan : \n");
	printf("1. Persegi Panjang \n");
	printf("2. Bujur Sangkar \n");
	printf("3. Segitiga Sama Kaki \n");
	printf("4. Lingkaran \n");
	printf("Masukkan pilihan (1/2/3/4): ");
	scanf_s("%d", &pilihan);


	if (pilihan == 1)
	{
		printf("panjang = ");
		scanf_s("%d ", &panjang);
		printf("lebar = ");
		scanf_s("%d ", &lebar);
		luas(panjang, lebar);
		printf("Luas persegi panjang = %d cm2\n", panjang);
	}
	else if (pilihan == 2)
	{
		printf("panjang = ");
		scanf_s("%d ", &panjang);
		luas(panjang, lebar);
		printf("Luas bujur sangkar = %d cm2\n", panjang);
	}
	else if (pilihan == 3)
	{
		printf("panjang = ");
		scanf_s("%d ", &panjang);
		printf("lebar = ");
		scanf_s("%d ", &lebar);
		luas(panjang, lebar);
		printf("Luas segitiga sama kaki = %d cm2\n", panjang);
	}
	else if (pilihan == 4)
	{
		printf("panjang = ");
		scanf_s("%d ", &panjang);
		luas(panjang, lebar);
		printf("Luas lingkaran = %d cm2\n", panjang);
	}

	//1.Alamat dari variabel
	/*
	int var1;
	char var2[10];
	cout << "Address of var1 variable: ";
	cout << &var1 << endl;
	cout << "Address of var2 variable: ";
	cout << &var2 << endl;
	*/

	//2.
	/*
	int var = 20; // actual variable declaration.
	int *ip; // pointer variable
	ip = &var; // store address of var in pointer variable
	cout << "Value of var variable: ";
	cout << var << endl;
	// print the address stored in ip pointer variable
	cout << "Address stored in ip variable: ";
	cout << ip << endl;
	// access the value at the address available in pointer
	cout << "Value of *ip variable: ";
	cout << *ip << endl;
	*/

	//3.Null pointer
	/*
	int *ptr = NULL;
	cout << "The value of ptr is " << ptr;
	*/

	//4.
	/*
	int var[MAX] = { 10, 100, 200 };
	int *ptr;
	// let us have array address in pointer.
	ptr = var;
	for (int i = 0; i < MAX; i++)
	{
		cout << "Address of var[" << i << "] = ";
		cout << ptr << endl;
		cout << "Value of var[" << i << "] = ";
		cout << *ptr << endl;
		// point to the next location
		ptr++;
	}
	*/

	//5.
	/*
	int var[MAX] = { 10, 100, 200 };
	int *ptr;
	// let us have address of the last element in pointer.
	ptr = &var[MAX - 1];
	for (int i = MAX; i > 0; i--)
	{
		cout << "Address of var[" << i << "] = ";
		cout << ptr << endl;
		cout << "Value of var[" << i << "] = ";
		cout << *ptr << endl;
		// point to the previous location
		ptr--;
	}
	*/

	//6. Membandingkan pointer
	/*
	int var[MAX] = { 10, 100, 200 };
	int *ptr;
	// let us have address of the first element in pointer.
	ptr = var;
	int i = 0;
	while (ptr <= &var[MAX - 1])
	{
		cout << "Address of var[" << i << "] = ";
		cout << ptr << endl;
		cout << "Value of var[" << i << "] = ";
		cout << *ptr << endl;
		// point to the previous location
		ptr++;
		i++;
	}
	*/

	//7.
	/*
	int var[MAX] = { 10, 100, 200 };
	int *ptr;
	// let us have array address in pointer.
	ptr = var;
	for (int i = 0; i < MAX; i++)
	{
		cout << "Address of var[" << i << "] = ";
		cout << ptr << endl;
		cout << "Value of var[" << i << "] = ";
		cout << *ptr << endl;
		// point to the next location
		ptr++;
	}
	*/

	//8.Array pointer
/*
	int var[MAX] = { 10, 100, 200 };
	for (int i = 0; i < MAX; i++)
	{
		cout << "Value of var[" << i << "] = ";
		cout << var[i] << endl;
}
*/
/*
	int var[MAX] = { 10, 100, 200 };
	int *ptr[MAX];
	for (int i = 0; i < MAX; i++)
	{
		ptr[i] = &var[i]; // assign the address of integer.
	}
	for (int i = 0; i < MAX; i++)
	{
		cout << "Value of var[" << i << "] = ";
		cout << *ptr[i] << endl;
	}
*/
/*
const int MAX = 4;

const char *names[MAX] = { "Zara Ali", "Hina Ali","Nuha Ali","Sara Ali"};
for (int i = 0; i < MAX; i++)
{
	cout << "Value of names[" << i << "] = ";
	cout << names[i] << endl;
}

//9.

	int var;
	int *ptr;
	int **pptr;
	var = 3000;
	// take the address of var
	ptr = &var;
	// take the address of ptr using address of operator &
	pptr = &ptr;
	// take the value using pptr
	cout << "Value of var :" << var << endl;
	cout << "Value available at *ptr :" << *ptr << endl;
	cout << "Value available at **pptr :" << **pptr << endl;
	*/

//10
/*
unsigned long sec;
getSeconds(&sec);
// print the actual value
cout << "Number of seconds :" << sec << endl;
*/

// an int array with 5 elements.
/*
int balance[5] = { 1000, 2, 3, 17, 50 };
double avg;
// pass pointer to the array as an argument.
avg = getAverage(balance, 5);
// output the returned value
cout << "Average value is: " << avg << endl;
*/

// a pointer to an int.
/*
int *p;
p = getRandom();
for (int i = 0; i < 10; i++)
{
	cout << "*(p + " << i << ") : ";
	cout << *(p + i) << endl;
}
*/

/*
int i;
double d;
// declare reference variables
int &r = i;
double &s = d;
i = 5;
cout << "Value of i : " << i << endl;
cout << "Value of i reference : " << r << endl;
d = 11.7;
cout << "Value of d : " << d << endl;
cout << "Value of d reference : " << s << endl;
*/

/*
// local variable declaration:
int a = 100;
int b = 200;
cout << "Before swap, value of a :" << a << endl;
cout << "Before swap, value of b :" << b << endl;
// calling a function to swap the values.
swap(a, b);
cout << "After swap, value of a :" << a << endl;
cout << "After swap, value of b :" << b << endl;
*/

/*
cout << "Value before change" << endl;
for (int i = 0; i < 5; i++)
{
	cout << "vals[" << i << " ] = ";
	cout << vals[i] << endl;
}
setValues(1) = 20.23; // change 2nd element
setValues(3) = 70.8; // change 4th element
cout << "Value after change" << endl;
for (int i = 0; i < 5; i++)
{
	cout << "vals[" << i << "] = ";
	cout << vals[i] << endl;
}
*/

/*
cout << "Value before change" << endl;
for (int i = 0; i < 5; i++)
{
	cout << "vals[" << i << " ] = ";
	cout << vals[i] << endl;
}
setValues(1) = 20.23; // change 2nd element
setValues(3) = 70.8; // change 4th element
cout << "Value after change" << endl;
for (int i = 0; i < 5; i++)
{
	cout << "vals[" << i << "] = ";
	cout << vals[i] << endl;
}
*/
	//return 0;
	system("pause");
//10.
}

/*
void getSeconds(unsigned long *par)
{
	// get the current number of seconds
	*par = time(NULL);
	return;
}
*/
/*
double getAverage(int *arr, int size)
{
	int i, sum = 0;
	double avg;
	for (i = 0; i < size; ++i)
	{
		sum += arr[i];
	}
	avg = double(sum) / size;
	return avg;
}
*/

/*
void swap(int& x, int& y)
{
	int temp;
	temp = x; // save the value at address x
	x = y; // put y into x
	y = temp; //put x into y
	return;
}
*/