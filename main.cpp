/*Nama    : Valeria Nefi Hossiana Rahayu
NIM     : A11.2022.14302
Kelas   : A11.4207
Judul   : Penjumlahan, Pengurangan, Perkalian Dua Bilangan, serta Total dan Rata-Rata Array
*/
#include <iostream>

using namespace std;

int tambah(int a, int b){
    return a+b;
}
int kurang(int a, int b){
    return a-b;
}
int kali(int a, int b){
    return a*b;
}
int result(int arr[], int x){
    int jumlah = 0;
    for(int i=0; i<x; i++){
        jumlah+=arr[i];
    }
    return jumlah;
}
float average(int arr[], int x){
    float jumlah = 0;
    for(int i=0; i<x; i++){
        jumlah+=arr[i];
    }
    return jumlah/=x;
}


int main()
{
    int a, b, x;
    cout<<"==============================================="<<endl;
    cout<<"\tPROGRAM KALKULATOR SEDERHANA"<<endl;
    cout<<"==============================================="<<endl;
    cout<<"Program Penjumlahan, Pengurangan, dan Perkalian"<<endl;
    cout<<"==============================================="<<endl;
    cout<<"\nMasukkan Nilai Pertama \t= ";
    cin>>a;
    cout<<"Masukkan Nilai Kedua \t= ";
    cin>>b;
    cout<<"\n==============================================="<<endl;
    cout<<"\nHasil Penjumlahan \t= "<<a<<" + "<<b<<" = "<<tambah(a,b)<<endl;
    cout<<"Hasil Pengurangan \t= "<<a<<" - "<<b<<" = "<<kurang(a,b)<<endl;
    cout<<"Hasil Perkalian \t= "<<a<<" * "<<b<<" = "<<kali(a,b)<<endl;
    cout<<endl;
    cout<<"==============================================="<<endl;
    cout<<"\tProgram Total dan Rata-Rata"<<endl;
    cout<<"==============================================="<<endl;
    cout<<"\tMasukkan Jumlah Inputan Array = ";
    cin>>x;
    cout<<"\n\t    ========================\t\t"<<endl;
    int ar[x];
    for(int i=0; i<x; i++){
        cout<<"\t   Masukkan Array index ke-"<<i<<" =";
        cin>>ar[i];
    }
    cout<<"\n==============================================";
    cout<<"\n\nTotal Inputan Array \t\t= "<< result(ar,x)<<endl;
    cout<<"Rata-Rata Inputan Array \t= "<< average(ar,x)<<endl<<endl;
    cout<<"==============================================="<<endl;
    return 0;
}
