#include <iostream>
#include <string>
using namespace std;

class barang {
private:
    string namabarang;
    string kodebarang;

public:
 
    barang(string nama, string kode) {
        namabarang = nama;
        kodebarang = kode;
    }

    
    void tampilkanInfo() {
        cout << "Nama  : " << namabarang << endl;
        cout << "Kode  : " << kodebarang << endl;
    }
};

int main() {
   
    barang brg("roti", "12345");

   
    brg.tampilkanInfo();

    return 0;
}