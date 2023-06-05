#include <iostream>
using namespace std;
#ifndef Buku_H
#define Buku_H
class Buku {
private :
	string judul_buku;
public :
	Buku(string pjudul) {
		judul_buku = pjudul;
	}
	string getJudulBuku() {
		return judul_buku;
	}
};

#endif
