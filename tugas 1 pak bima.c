#include<cstdlib>
#include <iostream>
using namespace std;

int HitungIPK(char x, int y);

int main()
{
	cout << "Menghitung IPK" << endl;
	cout << "by:Verdi Pratama" << endl;
	cout << "NIM: 11216050" << endl;
	cout << "Mata Kuliah: Algoritma & Pemrograman" << endl;
	cout << "*****************************************************" << endl << endl;

	int jumlahMK, jumlahMhs, jumlahsks, a, b, c;
	float ip_plus, ipp, ippp;
	char hitunglagi;
	jumlahsks = 0;
	ippp = 0;

	struct mahasiswa
	{
		char nama[25];
		int nim;
		float ipk;
	};

	struct matakuliah
	{
		int kodeMK;
		char namaMK[25];
		char nilai;
		int sks;
	};

	mahasiswa mhs;
	matakuliah makul;

	cout << "Silahkan masukkan data diri anda" << endl;
	cout << "====================================" << endl << endl;

	do {
		cout << "------------------------------------------------------" << endl << endl;
		cout << "\tNama\t: ";
		cin >> mhs.nama;
		cout << "\tNim\t: ";
		cin >> mhs.nim;
		cout << endl;
		cout << "------------------------------------------------------" << endl << endl;

		cout << "Berapa jumlah matakuliah yang akan dihitung? ";
		cin >> jumlahMK;
		cout << endl;

		for (b = 0; b < jumlahMK; b++)
		{
			cout << b + 1;
			cout << "  .Masukkan kode MK\t: ";
			cin >> makul.kodeMK;
			cout << "    Masukkan nama MK\t: ";
			cin >> makul.namaMK;
			cout << "    Masukkan jumlah SKS\t: ";
			cin >> makul.sks;
			cout << "    Masukkan nilai MK (A,B,C,D,E) : ";
			cin >> makul.nilai;
			cout << endl;

			jumlahsks = jumlahsks + makul.sks;
			ipp = HitungIPK(makul.nilai, makul.sks);
			ippp += ipp;

		}
		mhs.ipk = ippp / jumlahsks;
		cout << "=================================================== \n";
		cout << "Jumlah SKS \t\t : " << jumlahsks << endl;
		cout << "Jumlah SKS x Nilai\t :" << ippp << endl;
		cout << "Indeks Prestasi \t :" << mhs.ipk << endl << endl;

		cout << "HItung lagi (y /n) = ";
		cin >> hitunglagi;

	} while (hitunglagi == 'y' || hitunglagi == 'Y');


	system("pause");
	return 0;
}

int HitungIPK(char x, int y)
{
	int ip;
	switch (x)
	{
	case 'A':
		ip = 4 * y;
		break;
	case 'B':
		ip = 3 * y;
		break;
	case 'C':
		ip = 2 * y;
		break;
	case 'D':
		ip = 1 * y;
		break;
	case 'E':
		ip = 0 * y;
		break;
	default:
		ip = 0;
		break;
	}
	return ip;
}
