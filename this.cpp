#include <iostream>
#include <string>
using namespace std;

class buku {
    string judul;
    public :
    string setget(string jdl)
    {
        this->judul = jdl;
        return this->judul;
    }
};