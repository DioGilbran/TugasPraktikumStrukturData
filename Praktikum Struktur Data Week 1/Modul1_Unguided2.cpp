#include <iostream> 
#include <string> 
using namespace std; 
struct informasi { 
string nama_brand; 
string no_kendaraan; 
string tipe_kendaraan; 
string berapa_cc; 
int tahun_produksi; 
}; 
int main() { 
informasi kendaraan1; 
cout << "Masukan informasi kendaraan\n"; 
cout << "Nama Pabrikan Kendaraan: "; 
getline(cin, kendaraan1.nama_brand); 
cout << "Tipe Kendaraan: "; 
getline(cin, kendaraan1.tipe_kendaraan); 
cout << "Nomor Kendaraan: "; 
getline(cin, kendaraan1.no_kendaraan); 
cout << "Besar cc Kendaraan: "; 
getline(cin, kendaraan1.berapa_cc); 
cout << "Tahun Produksi Kendaraan: "; 
cin >> kendaraan1.tahun_produksi; 
cout <<endl; 
cout <<endl; 
cout << "Informasi Kendaraan Anda\n"; 
cout << "Pabrikan: " << kendaraan1.nama_brand << endl; 
cout << "Tipe: " << kendaraan1.tipe_kendaraan << endl; 
cout << "Nomor Kendaraan: " << kendaraan1.no_kendaraan << endl; 
cout << "Besar cc: " << kendaraan1.berapa_cc << endl; 
cout << "Tahun Produksi: " << kendaraan1.tahun_produksi << endl; 
return 0; 
} 
