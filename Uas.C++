#include <iostream>


using namespace std;

struct Barang {
	string nama;
	int jumlah;
	double harga;
};

const int maksBarang = 100;
Barang warehouse[maksBarang];
int jumlahBarang = 0;


//Fungsi Menu Utama

void menuUtama() {
	cout<<endl<<endl;
	std::cout << "db   d8b   db  .d8b.  d8888b. d88888b db   db  .d88b.  db    db .d8888. d88888b \n";
	std::cout << "88   I8I   88 d8' `8b 88  `8D 88'     88   88 .8P  Y8. 88    88 88'  YP 88'     \n";
	std::cout << "88   I8I   88 88ooo88 88oobY' 88ooooo 88ooo88 88    88 88    88 `8bo.   88ooooo \n";
	std::cout << "Y8   I8I   88 88~~~88 88`8b   88~~~~~ 88~~~88 88    88 88    88   `Y8b. 88~~~~~ \n";
	std::cout << "`8b d8'8b d8' 88   88 88 `88. 88.     88   88 `8b  d8' 88b  d88 db   8D 88.     \n";
	std::cout << " `8b8' `8d8'  YP   YP 88   YD Y88888P YP   YP  `Y88P'  ~Y8888P' `8888Y' Y88888P \n";
	std::cout << "                                                                                   \n";
	std::cout << "                                                                                   \n";
	std::cout << ".d8888. db    db .d8888. d888888b d88888b .88b  d88.                            \n";
	std::cout << "88'  YP `8b  d8' 88'  YP `~~88~~' 88'     88'YbdP`88                            \n";
	std::cout << "`8bo.    `8bd8'  `8bo.      88    88ooooo 88  88  88                            \n";
	std::cout << "  `Y8b.    88      `Y8b.    88    88~~~~~ 88  88  88                            \n";
	std::cout << "db   8D    88    db   8D    88    88.     88  88  88                            \n";
	std::cout << "`8888Y'    YP    `8888Y'    YP    Y88888P YP  YP  YP                            \n";
	std::cout << "                                                                                \n";
	

	
	cout << "+======================================+\n";
	cout << "|              Menu Utama              |\n";
	cout << "+=====================================++\n";
	cout << "| 1. Tambah Barang                     |\n";
	cout << "| 2. Lihat Barang                      |\n";
	cout << "| 3. Edit Barang                       |\n";
	cout << "| 4. Hapus Barang                      |\n";
	cout << "| 5. Keluar                            |\n";
	cout << "+======================================+\n";
	cout << "Pilih: ";
}

//Fungsi Tambah Barang

void tambahBarang() {
	if (jumlahBarang < maksBarang) {
		

		cout << "Nama Barang: ";
		getline(cin.ignore(), warehouse[jumlahBarang].nama);
		cout << "Jumlah: ";
		cin >> warehouse[jumlahBarang].jumlah;
		cout << "Harga: ";
		cin >> warehouse[jumlahBarang].harga;
		jumlahBarang++;
		cout << "Barang berhasil ditambahkan!\n";
	} else {
		cout << "Gudang sudah penuh!\n";
	}
}


//Fungsi Lihat Barang

void lihatBarang() {
	if (jumlahBarang == 0) {
		cout << "Gudang kosong!\n";
	} else {
		for (int i = 0; i < jumlahBarang; i++) {
			cout << "Barang " << i + 1 << ":\n";
			cout << "Nama: " << warehouse[i].nama << endl;
			cout << "Jumlah: " << warehouse[i].jumlah << endl;
			cout << "Harga: " << warehouse[i].harga << endl;
			cout << endl;
		}
	}
}


//Fungsi Edit Barang

void editBarang() {
	int index;
	cout << "Masukkan nomor barang: ";
	cin >> index;
	if (index > 0 && index <= jumlahBarang) {
		cout << "Nama Barang: ";
		cin >> warehouse[index - 1].nama;
		cout << "Jumlah: ";
		cin >> warehouse[index - 1].jumlah;
		cout << "Harga: ";
		cin >> warehouse[index - 1].harga;
		cout << "Barang berhasil diedit!\n";
	} else {
		cout << "Barang tidak ditemukan!\n";
	}
}


//Fungsi Hapus Barang

void hapusBarang() {
	int index;
	cout << "Masukkan nomor barang: ";
	cin >> index;
	if (index > 0 && index <= jumlahBarang) {
		for (int i = index - 1; i < jumlahBarang - 1; i++) {
			warehouse[i] = warehouse[i + 1];
		}
		jumlahBarang--;
		cout << "Barang berhasil dihapus!\n";
	} else {
		cout << "Barang tidak ditemukan!\n";
	}
}


//Fungsi Utama

int main() {
	int pilihan;
	do {
		menuUtama();
		cin >> pilihan;
		switch (pilihan) {
		case 1:
			tambahBarang();
			break;
		case 2:
			lihatBarang();
			break;
		case 3:
			editBarang();
			break;
		case 4:
			hapusBarang();
			break;
		case 5:
			cout << "Terima kasih!\n";
			break;
		default:
			cout << "Pilihan salah!\n";
		}
	} while (pilihan != 5);
	return 0;
}