#include <iostream>
#include <vector>
using namespace std;

#ifndef penerbit_H
#define penerbit_H

class penerbit {
private :
	string nama_penerbit;
	vector<class Pengarang*> pengarang;
public :
	penerbit(string pnama) {
		nama_penerbit = pnama;
	}
	string getNamaPenerbit() {
		return nama_penerbit;
	}

	void tambahPengarang(Pengarang* pPengarang) {

		pengarang.push_back(pPengarang);
	}

	vector<class Pengarang*> getPengarang() {
		return pengarang;
	}
};

#endif

