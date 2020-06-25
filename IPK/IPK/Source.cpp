#include<cstdlib>
#include<stdio.h>
#include <iostream>
using namespace std;

int HitungIPK(int x);

struct studentInfo
{
	int nrp;
	char nama[25];
	char jeniskelamin;
	char jurusan[20];
	float ips = 0;
	char predikat;
}hasil;

struct studentRecord
{
	char kodeMK[10];
	char namaMK[25];
	float nilai;
	int sks;
}indeks[10], result[10];

struct date 
{
	int tanggal;
	int bulan;
	int tahun;
};

float kuliah(const char *indeks) {
	if (indeks == "A")
	{
		return 4;
	}
	else if (indeks == "AB")
	{
		return 3.5;
	}
	else if (indeks == "B")
	{
		return 3;
	}
	else if (indeks == "BC")
	{
		return 2.5;
	}
	else if (indeks == "C")
	{
		return 2;
	}
	else if (indeks == "D")
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
const char *konv(int indeks) {
	if (indeks < 41)
	{
		return "E";
	}
	else if (indeks >= 41 && indeks <= 55)
	{
		return "D";
	}
	else if (indeks >= 56 && indeks <= 60)
	{
		return "C";
	}
	else if (indeks >= 61 && indeks <= 65)
	{
		return "BC";
	}
	else if (indeks >= 66 && indeks <= 70)
	{
		return "B";
	}
	else if (indeks >= 71 && indeks <= 80)
	{
		return "AB";
	}
	else
	{
		return "A";
	}
}

int main()
{
	int jumlahMK, jumlahMhs, jumlahsks, a, b, c, i;
	float ind_p = 0;
	float ip_plus, ipp, ippp;
	char hitunglagi;
	jumlahsks = 0;
	ippp = 0;

	struct studentInfo mhs;
	struct studentRecord makul;

	printf("=====================================================================\n");
	printf("\tProgram Penghitung Nilai Indeks Prestasi Semester (IPS)\t");
	printf("\n===================================================================\n\n");
	printf("DATA MAHASISWA");

	do {
		cout << "\n------------------------------------------------------" << endl << endl;
		cout << "\tNama\t: ";
		cin >> mhs.nama;
		cout << "\tNRP\t: ";
		cin >> mhs.nrp;
		cout << "\tJenis Kelamin\t: ";
		cin >> mhs.jeniskelamin;
		cout << "\tJurusan\t: ";
		cin >> mhs.jurusan;
		cout << endl;
		cout << "\n------------------------------------------------------" << endl << endl;

		cout << "Berapa jumlah matakuliah yang akan dihitung? ";
		cin >> jumlahMK;
		cout << endl;

		for (b = 0; b < jumlahMK; b++)
		{
			cout << b + 1;
			cout << "  .Masukkan kode mata kuliah\t: ";
			cin >> makul.kodeMK;
			cout << "    Masukkan nama mata kuliah\t: ";
			cin >> makul.namaMK;
			cout << "    Masukkan jumlah SKS\t: ";
			cin >> makul.sks;
			cout << "    Masukkan nilai mata kuliah (0 - 100): ";
			cin >> makul.nilai;
			cout << endl;

			/*
			cin >> indeks[b].nilai;
			cout << "HURUF : " << konv(indeks[b].nilai) << endl;
			cout << "indeks : " << kuliah(konv(indeks[b].nilai)) << endl;
			result[b].nilai = kuliah(konv(indeks[b].nilai));

			result[b].nilai = result[b].nilai * makul.sks;
			ind_p = ind_p + result[b].nilai;
			jumlahsks = jumlahsks + makul.sks;
			hasil.ips = ind_p / jumlahsks;
			*/
			jumlahsks = jumlahsks + makul.sks;
			ipp = HitungIPK(makul.nilai);
			ippp += ipp;
			ind_p = ippp ;

		}
		mhs.ips = ind_p / jumlahsks;

		cout << "=================================================== \n";
		cout << "Jumlah SKS \t\t : " << jumlahsks << endl;
		cout << "Jumlah Nilai\t :" << ind_p << endl;
		cout << "Indeks Prestasi Semester\t :" << mhs.ips << endl << endl;

		cout << "HItung lagi (y /n) = ";
		cin >> hitunglagi;

	} while (hitunglagi == 'y' || hitunglagi == 'Y');

	system("pause");
	return 0;
}

int HitungIPK(int x)
{
	int nilaiAngka;
	if (x>=81 && x<= 100)
	{
		nilaiAngka = 4;
		printf("\tPredikat : A\n");
	}
	else if (x>=71 && x<=80)
	{
		nilaiAngka = 3.5;
		printf("\tPredikat : AB\n");
	}
	else if (x >= 66 && x <= 70)
	{
		nilaiAngka = 3;
		printf("\tPredikat :B\n");
	}
	else if (x >= 61 && x <= 65)
	{
		nilaiAngka = 2.5;
		printf("\tPredikat : BC\n");
	}
	else if (x >= 56 && x <= 60)
	{
		nilaiAngka = 2;
		printf("\tPredikat : C\n");
	}
	else if (x >= 41 && x <= 55)
	{
		nilaiAngka = 1;
		printf("\tPredikat : D\n");
	}
	else if (x <= 40)
	{
		nilaiAngka = 0;
		printf("\tPredikat : E\n");
	}
	else
	{
		printf("Angka Tidak Valid");
	}

	return nilaiAngka;
}