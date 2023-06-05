#include <iostream>
#include <vector>
using namespace std;

#ifndef pengarang_H
#define pengarang_H

class pengarang {
private :
	string nama_pengarang;
	vector<class Buku*> buku;
public :
	pengarang(string pnama) {
		nama_pengarang = pnama;
	}

	string getNamaPengarang() {
		return nama_pengarang;
	}

	void tambahBuku(Buku* pbuku) {
		buku.push_back(pbuku);
	}
	vector<class Buku* > getBuku() {
		return buku;
	}
};
#endif
