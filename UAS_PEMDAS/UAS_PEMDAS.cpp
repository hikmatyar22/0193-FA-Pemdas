#include <iostream>
using namespace std;

class MasukUniversitas {
private	: // isi access modifier disini
	int uangPendaftaran;
	// isi daftar variable yang dibutuhkan di bawah ini
	int uangSemesterPertama;
	int uangBangunan;
	int totalBiaya;

public:
	MasukUniversitas() {
		uangPendaftaran = 0;
		// isi nilai default variable yang dibutuhkan di bawah ini
		uangSemesterPertama = 0;
		uangBangunan = 0;
		totalBiaya = 0;
	}
	virtual void namaJalurMasuk(string pNama) {
		return;
	}
	
	// isi disini dengan fungsi virtual yang dibutuhkan
	virtual void hitungTotalBiaya(int uangPendaftaran, int uangSemesterPertama, int uangBangunan) {
		return uangPendaftaran + uangSemesterPertama + uangBangunan;
	}
	virtual void tampilkanTotalBiaya() {
		string status;

		if (hitungTotalBiaya == 1000000) {
			status = "Sedang";
		}

		else if (hitungTotalBiaya > 1000000) {
			status = "Mahal";
		}
		else {
			status = "Murah";
		}

	}
	virtual void input() {
		cout << " Masukan Uang Pendaftaran = ";
		cin >> uangPendaftaran;
		cout << " Masukan Uang Semester Pertama = ";
		cin >> uangSemesterPertama;
		cout << " Masukan Uang Bangunan = ";
		cin >> uangBangunan;
	}

	void setUangPendaftaran(int nilai) {
		this->uangPendaftaran = nilai;
	}
	float getUangPendaftaran() {
		return uangPendaftaran;
	}
	// isi setter dan getter variable yang dibutuhkan di bawah ini
	void setUangSemesterPertama(int nilai) {
		this->uangSemesterPertama = nilai;
	}
	float getUangSemesterPertama() {
		return uangSemesterPertama;
	}

	void setUangBangunan(int nilai) {
		this->uangBangunan = nilai;
	}
	float getUangSBangunan() {
		return uangBangunan;
	}

	void setTotalBiaya(int nilai) {
		this->totalBiaya = nilai;
	}
	float getUangSemesterPertama() {
		return totalBiaya;
	}

	
};

class SNBT : public MasukUniversitas {
	// isi disini untuk melengkapi class SNBT
public :
	void input();
	void hitungTotalBiaya(int uangPendaftaran, int uangSemesterPertama, int uangBangunan);
	void tampilkanTotalBiaya();


};
class SNBP : public MasukUniversitas {
	// isi disini untuk melengkapi class SNBP
public :
	void input();
	void hitungTotalBiaya(int uangPendaftaran, int uangSemesterPertama, int uangBangunan);
	void tampilkanTotalBiaya();

	
};
int main() {
	// isi disini untuk fungsi main
	int pilihan;
	do
	{
		system("CLS");
		cout << "Pilih Jalur Masuk" << endl;
		cout << "1. SNBT" << endl;
		cout << "2. SNBP" << endl;
		cout << "3. Keluar" << endl;
		cout << "Masukkan Piliahan : ";
		cin >> pilihan;

	
}