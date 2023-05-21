#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n);
int n;
int main() {
  cout<<"Masukkan Jumlah Inputan : ";
  cin>>n;
  int ar[n];
  for(int i=0; i<n; i++){
    cout<<"Indeks ke-"<<i<<" : ";
    cin>>ar[i];
  }

  cout << "Sebelum Insertion Sort: ";
  for(int i=0; i<n;i++){
    cout<<ar[i]<< " ";
  }
  cout<<endl;

  insertion_sort(ar, n);

  cout << "Setelah Insertion Sort: ";
  for(int i=0; i<n; i++){
    cout<<ar[i]<<" ";
  }
  cout<<endl;

  return 0;
}

void insertion_sort(int ar[], int n) {
  for (int i = 1; i < n; i++) {
    int key = ar[i];
    int j = i - 1;
    while (j >= 0 && ar[j] < key) {
      ar[j+1] = ar[j];
      j--;
    }
    ar[j+1] = key;
  }
}
