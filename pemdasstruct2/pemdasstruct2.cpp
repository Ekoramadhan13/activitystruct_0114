#include <iostream>
using namespace std;

struct DetailAlamat {
	string desa;
	string kota;
};

struct Mahasiswa{
	string nim;
	string nama;
	DetailAlamat alamat;
	int umur;
};

int main() {
	Mahasiswa mhs;
	cin >> mhs.nim;
	cout << "Nomor Mahasiswa : ";
	cin >> mhs.nim;
	cout << "Nama Mahasiswa : ";
	cin >> mhs.nama;

	cout << "Alamat Mahasiswa : " << endl;
	cout << "\t Nama Desa : ";
	cin >> mhs.alamat.desa;
	cout << "\t Nama Kota : ";
	cin >> mhs.alamat.kota;

	cout << "Umur Mahasiswa : ";
	cin >> mhs.umur;

	cout << endl;
	cout << "\n NIM : " << mhs.nim;
	cout << "\n NAMA : " << mhs.nama;
	cout << "\n ALAMAT : ";
	cout << "\n \t DESA : " << mhs.alamat.desa;
	cout << "\n \t KOTA : " << mhs.alamat.kota;
	cout << "\n Umur : " << mhs.umur;
}
