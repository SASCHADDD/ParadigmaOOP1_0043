#include<iostream>
#include <vector>
using namespace std;

class dokter;
class pasien{ //asosiasi
    public:
        string nama;
        vector<dokter*> daftar_dokter;
        pasien(string pNama) :nama(pNama){
            cout << "Pasien \"" << nama << "\" tidak ada\n";
        }    
        ~pasien(){
            cout << "Pasien \"" << nama << "\" tidak ada\n";
        }
        void tambahDokter(dokter*);
        void cetakDokter();
};

class dokter{
    public:
        string nama;
        vector<pasien*> daftar_pasien;

        dokter(string pNama) :nama(pNama){
            cout
        }
}