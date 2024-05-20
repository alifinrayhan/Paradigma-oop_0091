#include <iostream>
#include <vector>
using namespace std;

#include "anak.H"
#include "ibu.H"

int main() {
    ibu* varIbu = new ibu("dini");
    ibu* varIbu2 = new ibu("novi");
    anak* varAnak1 = new anak("tono");
    anak* varAnak2 = new anak("rini");
    anak* varAnak3 = new anak("dewi");

    varibu->tambahAnak(varAnak1);
    varibu->tambahAnak(varAnak2);
    varibu2->tambahAnak(varAnak3);
    varibu2->tambahAnak(varAnak4);

    varibu->cetakAnak();
    varibu2->cetakAnak();

    delete varibu;
    delete varibu2;
    delete varAnak1;
    delete varAnak2;
    delete varAnak3;
    delete varAnak4;


}