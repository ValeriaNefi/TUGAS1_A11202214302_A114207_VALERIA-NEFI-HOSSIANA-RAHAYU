#include <iostream>

using namespace std;

int isGanjil (int arr[], int n){
    for(int i=0; i<n; i++)
    {
        if(arr[i]%2==1){
            cout<<arr[i]<<" adalah bilangan ganjil";
        }
        cout<<endl;
        return arr[i];
    }

}

void cariGenap(int arr[], int n) {
    int gencil = -1, index = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0 && (gencil == -1 || arr[i] < gencil))
        {
            gencil = arr[i];
            index = i;
        }
    }
    if (gencil == -1)
    {
        cout << "Tidak ada nilai genap pada deret"  << endl;
    } else
    {
        cout << "Nilai genap terkecil dalam deret : " << gencil << endl;
        cout << "Terdapat pada index ke-" << index << endl;
    }
}

int main() {
    int n;
    cout << "Masukkan jumlah elemen : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan elemen ke-" << i + 1 << " : ";
        cin >> arr[i];
    }
   isGanjil(arr, n);
   cariGenap (arr, n);
    return 0;
}
