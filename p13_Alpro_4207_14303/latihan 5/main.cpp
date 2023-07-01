/*VALERIA NEFI HR
A11.2022.14302*/
#include <iostream>

using namespace std;
struct Sepeda{
    string merk="Polygon";
    string type="Sepeda Gunung";
    int tahun=2013;
    int harga=2000000;


}
;
int main()
{
    Sepeda spd;
    Sepeda *sepeda;
    sepeda=&spd;
    cout <<" Merk \t: "<<sepeda->merk << endl;
    cout <<" Type \t: "<<sepeda->type <<endl;
    cout <<" Tahun \t: "<<sepeda->tahun <<endl;
    cout <<" Harga \t: "<<sepeda->harga <<endl;
    return 0;
}
