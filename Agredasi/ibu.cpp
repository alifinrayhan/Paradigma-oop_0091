#include <iostream>
#include <vector)

#include "anak.H"
#include "ibu.H"

int main() {
    ibu* varibu = new ibu("dini");
    ibu* varibu = new ibu("novi");
    anak* varAnak1 = new anak("tono");
    anak* varAnak2 = new anak("rini");
    anak* varAnak3 = new anak("dewi");

    varibu->tambahAnak(varAnak1);
    varibu->tambahAnak(varAnak2);
    varibu->tambahAnak(varAnak3);
    varibu->tambahAnak(varAnak4);

    varibu->cetakAnak();
    varibu->cetakAnak();

}