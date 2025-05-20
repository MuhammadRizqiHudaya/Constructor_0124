#include <iostream>
#include <string>
using namespace std;

class barang {
private:
    string namaBarang;
    int kodeBarang;

public:
 
  barang(string nama, int kode);

    void cetak();
};
barang::barang(string nama, int kode)
{
    namaBarang = nama;
    kodeBarang = kode;
}

void barang::cetak(){
    cout << "Constructor Dengan Parameter Terpanggil" << endl;
    cout << "Nama Barang    : " << namaBarang << endl;
    cout << "Kode Barang    : " << kodeBarang << endl;
}

int main() {
   
    barang brg( "roti", 12345);

   
    brg.cetak();

    return 0;
}
