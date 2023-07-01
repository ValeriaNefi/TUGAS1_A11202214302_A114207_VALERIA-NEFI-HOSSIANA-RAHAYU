/*VALERIA NEFI HR
A11.2022.14302*/
#include <iostream>

using namespace std;
struct Sepeda{
    string merk="Polygon";
    string type="Sepeda Gunung";
    int tahun=2013;
    int harga=2000000;


};
int main()
{
    Sepeda spd;
    cout <<" Merk \t: "<< spd.merk << endl;
    cout <<" Type \t: "<< spd.type << endl;
    cout <<" Tahun \t: "<< spd.tahun << endl;
    cout <<" Harga \t: "<< spd.harga << endl;
    return 0;
}
