#include<stdio.h>
#include<math.h>
#include<iostream>

using namespace std;

#define A 100

struct data {
	int no_urut[1000], bil[1000];
};

void urut(int *awal, int *plot) {
	int urutan = *awal;
	*awal = *plot;
	*plot = urutan;
}

void shorting(struct data &angka, int x) {
	int i, j;
	bool shorted;
	for (i = 1; i <= x; i++) {
		shorted = false;
		for (j = 1; j <= x - i; j++) {
			if (angka.bil[j] < angka.bil[j + 1]) {
				urut(&angka.bil[j], &angka.bil[j + 1]);
				urut(&angka.no_urut[j], &angka.no_urut[j + 1]);
				shorted = true;
			}
		}
		if (shorted == false)
			break;
	}
}

void main() {
	int i;
	struct data awal, akhir;

	printf("Bilangan acak awal = \n");
	printf(" No       Bilangan \n");
	for (i = 1; i <= A; i++) {
		awal.no_urut[i] = i;
		awal.bil[i] = (int)(100 * rand() / RAND_MAX);
		printf("%4d.      %d\n", awal.no_urut[i], awal.bil[i]);
	}
	printf("\n\n");

	shorting(awal, A);

	printf("Hasil akhir bilangan = \n");
	printf(" No    Bilangan  \n");
	for (i = 1; i <= A; i++) {
		printf("%4d.    %d\n", awal.no_urut[i], awal.bil[i]);
		printf("\n");
	}
	system("pause");
}




#include <iostream>
#include <string.h>
#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

//1
/*
struct Books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};
int main()
{
	struct Books Book1;
	struct Books Book2;

	strcpy_s(Book1.title, "Learn C++ Programming");
	strcpy_s(Book1.author, "Chand Miyan");
	strcpy_s(Book1.subject, "C++ Programming");
	Book1.book_id = 6495407;

	strcpy_s(Book2.title, "Telecom Billing");
	strcpy_s(Book2.author, "Yakit Singha");
	strcpy_s(Book2.subject, "Telecom");
	Book2.book_id = 6495700;

	cout << "Book 1 title : " << Book1.title << endl;
	cout << "Book 1 author : " << Book1.author << endl;
	cout << "Book 1 subject : " << Book1.subject << endl;
	cout << "Book 1 id : " << Book1.book_id << endl;

	cout << "Book 2 title : " << Book2.title << endl;
	cout << "Book 2 author : " << Book2.author << endl;
	cout << "Book 2 subject : " << Book2.subject << endl;
	cout << "Book 2 id : " << Book2.book_id << endl;
	system("pause");
}
*/

//2
/*
void printBook(struct Books book);
struct Books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};
int main()
{
	struct Books Book1;
	struct Books Book2;

	strcpy_s(Book1.title, "Learn C++ Programming");
	strcpy_s(Book1.author, "Chand Miyan");
	strcpy_s(Book1.subject, "C++ Programming");
	Book1.book_id = 6495407;

	strcpy_s(Book2.title, "Telecom Billing");
	strcpy_s(Book2.author, "Yakit Singha");
	strcpy_s(Book2.subject, "Telecom");
	Book2.book_id = 6495700;

	printBook(Book1);

	printBook(Book2);
	system("pause");
}
void printBook(struct Books book)
{
	cout << "Book title : " << book.title << endl;
	cout << "Book author : " << book.author << endl;
	cout << "Book subject : " << book.subject << endl;
	cout << "Book id : " << book.book_id << endl;
}
*/

//3
/*
void printBook(struct Books *book);
struct Books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};
int main()
{
	struct Books Book1;
	struct Books Book2;

	strcpy_s(Book1.title, "Learn C++ Programming");
	strcpy_s(Book1.author, "Chand Miyan");
	strcpy_s(Book1.subject, "C++ Programming");
	Book1.book_id = 6495407;

	strcpy_s(Book2.title, "Telecom Billing");
	strcpy_s(Book2.author, "Yakit Singha");
	strcpy_s(Book2.subject, "Telecom");
	Book2.book_id = 6495700;

	printBook(&Book1);

	printBook(&Book2);
	system("pause");
}
// This function accept pointer to structure as parameter.
void printBook(struct Books *book)
{
	cout << "Book title : " << book->title << endl; //struct pointer
	cout << "Book author : " << book->author << endl;
	cout << "Book subject : " << book->subject << endl;
	cout << "Book id : " << book->book_id << endl;
}
*/

//4
/*
struct mahasiswa
{
	char nama[50];
	int no_id;
	char gender[5];
	char kelas[10];
};
void main()
{
	struct mahasiswa mhs[100];
	int i, jml_mhs;
	printf("Masukkan jumlah mahasiswa : ");
	scanf_s("%d", &jml_mhs);
	// ===== Memasukkan data-data mahasiswa ===== //
	for (i = 1; i <= jml_mhs; i++)
	{
		printf("Mahasiswa ke-%d : \n", i);
		printf("Nama : ");
		cin >> mhs[i].nama;
		printf("No Id : ");
		cin >> mhs[i].no_id;
		printf("Gender : ");
		cin >> mhs[i].gender;
		printf("Kelas : ");
		cin >> mhs[i].kelas;
		printf("\n\n");
	}
	for (i = 1; i <= jml_mhs; i++)
	{
		printf("Mahasiswa ke-%d : \n", i);
		printf("Nama : %s\n", mhs[i].nama);
		printf("No Id : %d\n", mhs[i].no_id);
		printf("Gender : %s\n", mhs[i].gender);
		printf("Kelas : %s\n", mhs[i].kelas);
		printf("\n\n");
	}

	Sleep(50000);
}
*/

//5
/*
struct anatomi
{
	char media_gerak[50];
	int jml;
};
struct pola_hidup
{
	char cara_bergerak[50];
	struct anatomi gerak;
	char cara_berkembangbiak[50];
};
struct jenis
{
	char nama[50];
	struct pola_hidup ph;
};
void main()
{
	struct jenis makhluk[100];
	int i, jml;
	printf("Masukkan jumlah makhluk : ");
	scanf_s("%d", &jml);
	// ===== Memasukkan data-data makhluk ===== //
	for (i = 1; i <= jml; i++)
	{
		printf("Masukkan nama makhluk : ");
		cin >> makhluk[i].nama;
		printf("Masukkan cara bergeraknya : ");
		cin >> makhluk[i].ph.cara_bergerak;
		printf("Dengan media apa makhluk tersebut bergerak : ");
		cin >> makhluk[i].ph.gerak.media_gerak;
		printf("Berapa jumlah kaki/sirip/sayap makhluk tersebut : ");
		cin >> makhluk[i].ph.gerak.jml;
		printf("Dengan cara apa makhluk berkembangbiak : ");
		cin >> makhluk[i].ph.cara_berkembangbiak;
		printf("\n");
	}
	printf("\n\n");
	// ===== Mencetak data-data makhluk ===== //
	for (i = 1; i <= jml; i++)
	{
		printf("Nama makhluk : %s\n", makhluk[i].nama);
		printf("Cara bergerak dengan %s\n", makhluk[i].ph.cara_bergerak);
		printf("Media makhluk tersebut bergerak : %s\n",makhluk[i].ph.gerak.media_gerak);
		printf("Jumlah kaki/sirip/sayap makhluk tersebut : %d\n",makhluk[i].ph.gerak.jml);
		printf("Cara makhluk berkembangbiak : %s\n",makhluk[i].ph.cara_berkembangbiak);
		printf("\n");
	}
	Sleep(50000);
}
*/

void urut(struct bilangan *sort);
struct bilangan
{
	int no_urut;
	int bil[100];
};

void main() {
	struct bilangan bil_rand[100];
	int nomor, i, random;

	random = int(100 * rand() / 32767);
	for (i = 1; i <= 100; i++)
	{
		printf("%d\n", bil_rand[i].no_urut);
		bil_rand[i].bil = random;
	}
	system("pause");
}

void urut(struct bilangan *sort) {
	int i, j, hasil, asal;
	for (i = 0; i <= 100; i++)
	{
		for (j = 0; j <= 100; j++) {
			if (asal[i] > asal[j])
			{
				hasil = asal[i];
				asal[i] = asal[j];
				asal[j] = hasil;
			}
		}
	}
}