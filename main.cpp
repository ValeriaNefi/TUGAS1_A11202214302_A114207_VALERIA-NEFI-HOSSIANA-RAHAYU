#include <iostream>

using namespace std;
/*FIBONACCI*/
int fibonacci(int x) {
   if((x==1)||(x==0)) {
      return(x);
   }else {
      return(fibonacci(x-1)+fibonacci(x-2));
   }
}


/*pangkat*/
int pangkat(int a, int b)
{
   if(b== 0)
      return 1;
   else if(b==1)
    return a;
   else
      return a*pangkat(a,b-1);
}

/*FAKTORIAL*/
int faktorial(int n)
{
   if(n == 0)
      return 1;
   else if(n==1 || n==2)
      return n;
   else
      return n*faktorial(n-1);
}

/*ADD(PENJUMLAHAN)*/
int add(int o, int p)
{
    if(p==0)
        return o;
    else
        return(1+add(o,p-1));
}

/*SUBTRACTION/ PENGURANGAN*/
int sub(int c, int d)
{
    if(d==0)
        return c;
    else
        return sub((c-1),(d-1));
}

/*TIMES/ PERKALIAN*/
int times (int r, int s)
{
    if(r==0 || s==0)
        return 0;
    else if (s==1)
        return r;
    else
        return r + times(r, s-1);
}

/*DEVISION/ PEMBAGIAN*/
int dev (int q, int t)
{
    if(q==0 || t==0)
        return 0;
    else if(q-t==0)
        return 1;
    else if(q<t)
        return 0;
    else
        return 1 + dev(q-t, q);
}

int main()
{
  /*FIBONACCI*/
   int x , i=0;
   cout<<"DERET FIBONACII"<<endl;
   cout<<"==============="<<endl;
   cout << "Masukkan Jumlah Deret Fibonacci : ";
   cin >> x;
   cout << "\nHasil Deret Fibonacci  : ";

   while(i < x) {
      cout << " " << fibonacci(i);
      i++;
   }

   cout<<endl<<endl;
   cout<<"======================================================================="<<endl<<endl;

   /*pangkat*/
   int a;
   int b;
   cout<<"PERPANGKATAN BILANGAN"<<endl;
   cout<<"====================="<<endl;
   cout<<"Masukkan Bilangan yang akan Dipangkatkan : ";
   cin>>a;
   cout<<endl;
   cout<<"Masukkan Pangkat Bilangan : ";
   cin>>b;
   cout<<"Hasil dari "<< a <<" pangkat "<< b <<" adalah : "<<pangkat(a,b);

   cout<<endl<<endl;
   cout<<"======================================================================="<<endl<<endl;

   /*FAKTORIAL*/
   int n;
   cout<<"Menghitung Nilai Faktorial"<<endl;
   cout<<"=========================="<<endl;
   cout<<"Masukkan Nilai Faktorial : ";
   cin>> n;
   int hasil=faktorial(n);
   cout<<"Hasil "<<n<<" ! = "<<hasil<<endl;

   cout<<endl;
   cout<<"======================================================================="<<endl<<endl;

   /*PENJUMLAHAN*/
   int o;
   int p;
   cout<<"PENJUMLAHAN DUA BILANGAN"<<endl;
   cout<<"========================"<<endl;
   cout<<"Masukkan Dua Bilangan yang akan Dijumlahkan: ";
   cin>>o>>p;
   int hasilt=add(o,p);
   cout<<"Hasil "<<o<<" + "<<p<<" adalah = "<<hasilt;

   cout<<endl<<endl;
   cout<<"======================================================================="<<endl<<endl;
   /*PENGURANGAN*/
   int c;
   int d;
   cout<<"PENGURANGAN DUA BILANGAN"<<endl;
   cout<<"========================"<<endl;
   cout<<"Masukkan Dua Bilangan yang akan Dikurangkan: ";
   cin>>c>>d;
   int hasilk=sub(c,d);
   cout<<"Hasil "<<c<<" - "<<d<<" adalah = "<<hasilk;

   cout<<endl<<endl;
   cout<<"======================================================================="<<endl;
   cout<<endl;
   /*PERKALIAN*/
   int r;
   int s;
   cout<<"PERKALIAN DUA BILANGAN"<<endl;
   cout<<"======================"<<endl;
   cout<<"Masukkan Dua Bilangan yang akan Dikalikan : ";
   cin>>r>>s;
   int hasilx=times(r,s);
   cout<<"Hasil "<<r<<" * "<<s<<" adalah = "<<hasilx<<endl;

   cout<<endl;
   cout<<"======================================================================="<<endl;
   cout<<endl;
   /*PEMBAGIAN*/
   int q;
   int t;
   cout<<"PEMBAGIAN DUA BILANGAN"<<endl;
   cout<<"======================"<<endl;
   cout<<"Masukan Dua Bilangan yang akan Dibagi : ";
   cin>>q>>t;
   int hasilb=dev(q,t);
   cout<<"Hasil "<<q<<" : "<<t<<" adalah = "<<hasilb<<endl;


   cout<<endl;
   cout<<"==================================END==================================="<<endl;
    return 0;
}

