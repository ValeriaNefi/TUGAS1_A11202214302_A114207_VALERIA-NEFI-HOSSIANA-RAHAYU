/*VALERIA NEFI HR
A11.2022.14302*/
#include <iostream>

using namespace std;
struct S1{
    float phi=3.14;
    int lpersegipanjang(int p,int l){
        return p*l;
    }
    float llingkaran(int r){
        return (22*r*r)/7;
    }
    float vkerucut(int r,int t){
        return (phi*r*r*t)/3;
    }
    float vbola(int r){
        return (4*phi*r*r*r)/3;
    }
};

int main()
{
    S1 soal1;

    cout <<soal1.lpersegipanjang(1,3)<< endl;
    cout <<soal1.llingkaran(5)<< endl;
    cout <<soal1.vkerucut(5,3)<< endl;
    cout <<soal1.vbola(5)<< endl;
    return 0;
}
