#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
	string nama;
	string status;
};

int main() {
	Mahasiswa mhs[20];
	for (int i = 0; i < 20; i++) {
		cout << "Data ke- " << (i + 1) << ":" << endl;
		cout << "Nama Mahasiswa : ";
		getline(cin, mhs[i].nama);
		cout << "Status Mahasiswa : ";
		getline(cin, mhs[i].status);
	}
	for (int i = 0; i < 3; i++) {
		cout << endl;
		cout << "Data ke- " << (i + 1) << ":" << endl;
		cout << "\nNama :" << mhs[i].nama;
		cout << "\nStatus : " << mhs[i].status;
		cout << endl;
	}
	char pilihan;
	do {
		string nama;
		string status;

		cout << "Nama Mahasiswa : ";
		cin >> nama;
		cout << "Status Mahasiswa : ";
		cin >> status;

		cout << "Apakah Anda ingin mengulangi lagi? (y/n)";
		cin >> pilihan;
	} while (pilihan == 'y' || pilihan == 'Y');
}
