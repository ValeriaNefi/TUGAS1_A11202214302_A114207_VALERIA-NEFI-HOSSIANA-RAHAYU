/*
NAMA        : VALERIA NEFI HOSSIANA RAHAYU
NIM         : A11.2022.14302
KELOMPOK    : A11.4207
*/

#include <iostream>

using namespace std;

bool isEven(int x){
    return x%2==0? 1:0;
}
bool isOdd(int x){
    return x%2==1? 1:0;
}
bool isFactor(int x,int y){
    return x%y==0? 1:0;
}
int maxN(int x,int y){
    int z;
    if(x>y){
        z=x;
    }else{
        z=y;}
    return z;
}
int minN(int x,int y){
    int z;
    if(x<y){
        z=x;
    }else{
        z=y;}
    return z;
}
int maxArray(int a[],int n){
    int temp=0;
    for(int i=0;i<=n;i++){
        temp=maxN(temp,a[i]);
    }
    return temp;
}
int minArray( int a[],int g) {
    int temp = 99999999;
    for ( int i=1;i<=g;i++) {
         if (a[i]<temp){
            temp=a[i];
         }
    }
    return temp;
}
bool isFound(int x, int a[],int n);
void swapN(int x,int y);

int x,y,n,p;

int main()
{

    cout <<"Masukkan Angka Pertama  = ";
    cin  >>x;
    cout <<"Masukkan Angka Kedua    = ";
    cin  >>y;
    cout <<"Masukkan Jumlah Array   = ";
    cin >>n;
    int aray[n]={};
    for (int i=1;i<=n;i++){
        cout <<"Masukkan Array ke-"<<i<<" = ";
        cin  >>aray[i];
    }
    cout <<"\n";

    cout <<"1 = True    0 = False"<<endl;
    cout <<"Apakah "<<x<<" itu genap ? "<<isEven(x)<< endl;
    cout <<"Apakah "<<x<<" itu ganjil ? "<<isOdd(x)<< endl;
    cout <<"Apakah "<<y<<" faktor dari "<<x<<" ? "<<isFactor(x,y)<< endl;
    cout <<"\n";
    cout <<"Angka paling besar adalah = "<<maxN(x,y)<<endl;
    cout <<"Angka paling kecil adalah = "<<minN(x,y)<<endl;
    cout <<"\n";
    cout <<"Angka paling besar dalam array adalah = "<<maxArray(aray,n)<<endl;
    cout <<"Angka paling kecil dalam array adalah = "<<minArray(aray,n)<<endl;
    cout <<"Masukkan angka yang ingin dicari dalam array = ";
    cin  >>p;
    cout <<"Apakah ada "<<p<<" di dalam array? "<<isFound(p,aray,n)<<endl;
    swapN(x,y);
    return 0;
}

bool isFound(int x,int a[],int n){
    for(int i=1;i<=n;i++){
        if(x==a[i]){
            return true;
        }
    }
    return false;
}
void swapN(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"Angka pertama menjadi = "<<x<<endl;
    cout<<"Angka kedua menjadi   = "<<y<<endl;

}
