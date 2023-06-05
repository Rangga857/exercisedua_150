#include <iostream>
#include<vector>
using namespace std;

#include "Buku.h"
#include "penerbit.h"
#include "pengarang.h"

int main() {
	penerbit gama_press("Game Press");
	penerbit intan_pariwara("Intan Parawira");
	pengarang Joko("Joko");
	pengarang lia("lia");
	pengarang asroni("asroni");
	pengarang giga("giga");

	Buku fisika("Fisika");
	Buku algoritma("Algoritma");
	Buku basisdata("Basisdara");
	Buku dasar_pemrograman("Dasar_Pemrograman");
	Buku Matematika("Matematika");
	Buku multimedia_1("Multimedia_1");

	Joko.tambahBuku(&fisika);
	Joko.tambahBuku(&algoritma);

	lia.tambahBuku(&basisdata);
	asroni.tambahBuku(&dasar_pemrograman);
	giga.tambahBuku(&Matematika);
	giga.tambahBuku(&multimedia_1);

	cout << "Daftar pengarang pada penerbit \ Gama press\":" << endl;
	vector<class Pengarang*> pengarang_gama_press = gama_press.getPengarang();
	for (int i = 0; i < pengarang_gama_press.size(); i++) {
		cout << pengarang_gama_press[i]->getNamaPengarang() << endl;
	}

	cout << "daftar pengarang pada penerbit \"Intan Pariwar\":" << endl;
	vector<class Pengarang*> pengarang_intan_pariwara = intan_pariwara.getPengarang();
	for (int i = 0; i < pengarang_intan_pariwara.size(); i++) {
		cout << pengarang_intan_pariwara[i]->getNamaPengarang() << endl;

	}


	cout << "Daftar penerbit yang diikuti \"Giga\":" << endl;
	vector<class Penerbit*> penerbit_giga;
	vector<class Pengarang*> pengarang_giga = giga.getNamaPengarang();
	for (int i = 0; i < pengarang_giga.size(); i++) {
		vector<class Penerbit*> penerbit_pegarang = pengarang_giga[i]->getPenerbit();
		for (int j = 0;j < penerbit_pengarang.size(); j++) {
			penerbit_giga.push_back(penerbit_pengarang[j]);
		}
	}
	for (int i = 0; i < penerbit_giga.size(); i++) {
		cout << penerbit_giga[i]->getNamaPenerbit() << endl;
	}
	cout << "Daftar buku yang dikarang \"Joko\":" << endl;
	vector < class Buku*> buku_joko = Joko.getBuku();
	for (int i = 0; i < buku_joko.size(); i++) {
		cout << buku_joko[i]->getJudulBuku() << endl;

	}

	cout << "daftar buku yang dikarang \"Lia\":" << endl;
	vector < class Buku*> buku_Lia = lia.getBuku();
	for (int i = 0; i < buku_Lia.size(); i++) {
		cout << buku_Lia[i]->getJudulBuku() << endl;

	}

	cout << "daftar buku yang dikarang \"Asroni\":" << endl;
	vector <class Buku*> buku_asroni = asroni.getBuku();
	for (int i = 0; i < buku_asroni.size(); i++) {
		cout << buku_asroni[i]->getJudulBuku() << endl;

	}

	cout << "daftar buku yang dikarang \"Giga\":" << endl;
	vector <class Buku*> buku_giga = giga.getBuku();
	for (int i = o; i < buku_giga.size();i++) {
		cout << buku_giga[i]->getJudulBuku() << endl;

	}

	return 0;
}