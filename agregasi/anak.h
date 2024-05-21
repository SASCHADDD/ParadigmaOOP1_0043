#ifndef ANAK_H
#define ANAK_H

class anak{
    public:
        string nama:
        anak(sttring pNama) :nama(pNama) {
            cout << "Anak \"" << nama << "\" ada\n";
        }
        ~anak() {
            cout << "Anak \"" << nama << "\" tidak ada\n";
        }
};
#endif