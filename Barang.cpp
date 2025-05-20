#include <iostream>
#include <string>
using namespace std;

class barang {
public:
    barang(int kode, string nama);
};


barang::barang(int kode, string nama) {
    cout << "constructor dengan parameter terpanggil"<< endl;
    cout << "kode :"<< kode << endl;
    cout <<"nama :" << nama << endl;
}

int main(){
    barang brg(12345, "Roti");
    return 0;
}