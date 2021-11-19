#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main() {
	string pemain, komputer;
	int a, random, b;
	srand(time(0));
	string tangan_pemain[3]={"Gunting", "Batu", "Kertas"};
	string tangan_komputer[3]={"Gunting", "Batu", "Kertas"};
	
	cout << "Masukkan nama pemain: ";
	cin >> pemain;
	
	cout << "0 = Gunting \n1 = Batu \n2 = Kertas \n";
	cout << "Pilih tangan: ";
	cin >> a;
	
	if (a >= 0 && a <=2) {
		for(b = 0; b <=2; b++) {
			random = rand()%3;
		}
		
		cout << pemain << " memilih: " << tangan_pemain[a] << endl;
		cout << "Komputer memilih: " << tangan_komputer[random] << endl;
		
		if (a == random) {
			cout << "Anda Seri";
		}
		else if (tangan_pemain[0] == tangan_komputer[1]) {
			cout << "Anda Kalah";
		}
		else if (tangan_pemain[1] == tangan_komputer[2]) {
			cout << "Anda Kalah";
		}
		else if (tangan_pemain[2] == tangan_komputer[0]) {
			cout << "Anda Kalah";
		}
		else {
			cout << "Selamat Anda Menang";
		}
	}
	else {
		cout << "Masukkan angka yang benar!";
	}
}
