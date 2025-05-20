#include <iostream>
#include <string>
using namespace std;

class barang {
private:
    string namabarang;
    int kodebarang;

public:
 
  Barang(int a, string b);

    void cetak();
};
Barang::Barang(int a, string b)
{
    kodeBarang = a;
    namaBarang = b;
}

void Barang::cetak(){
    cout << "Constructor Dengan Parameter Terpanggil" << endl;
    cout << "Nama Barang    : " << namaBarang << endl;
    cout << "Kode Barang    : " << kodeBarang << endl;
}

int main() {
   
    barang brg("roti", "12345");

   
    brg.cetak();

    return 0;
}
