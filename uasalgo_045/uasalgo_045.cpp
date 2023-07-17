#include <iostream>
#include <string>
using namespace std;

const int MAX_MAHASISWA = 100 ;
int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA]; 
int tahunMasuk[MAX_MAHASISWA];
int jumlahMahasiswa = 0.1;

void tambahMahasiswa(); {
	int jumlahMahasiswa = 0;
	jumlahMahasiswa++;
	cout << " Nim           :";
	cin >> NIM[jumlahMahasiswa];
	cout << " Nama          :";
	cin >> nama[jumlahMahasiswa];
	cout << " TahunMasuk    :";
	cin >> tahunMasuk[jumlahMahasiswa];
};

void tampilkanSemuaMahasiswa();

void algorithmacariMahasiswaByNIM();
//isi disini
void algorithmaSortByTahunMasuk();
int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			tambahMahasiswa();
			break;
		case 2:
			tampilkanSemuaMahasiswa();
			break;
		case 3:
			algorithmacariMahasiswaByNIM();
			break;
		case 4:
			algorithmaSortByTahunMasuk();
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}



//2.linearsearch dan stack