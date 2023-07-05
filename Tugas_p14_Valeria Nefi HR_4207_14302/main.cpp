/*
    Nama    :   Valeria Nefi Hossiana Rahayu
    NIM     :   A11.2022.14302
    Kelas   :   A11.4207
*/

#include <iostream>
/* library untuk mengukur waktu eksekusi suatu kode.*/
#include <chrono>
using namespace std;
using namespace std::chrono;

//sorting buble
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

//insertion sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int last = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] < last) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = last;
    }
}

int partition(int arr[], int small, int big) {// untuk membagi array dengan memilih sebuah elemen pivot dan
    //pengelompokan   (kiri= kecil, kanan= besar)
    int pivot = arr[big];
    int i = small - 1;
    for (int j = small; j <= big - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[big]);
    return (i + 1);
}


//Quick Sort
void quickSort(int arr[], int small, int big) {
    if (small < big) {
        int pi = partition(arr, small, big);
        quickSort(arr, small, pi - 1);
        quickSort(arr, pi + 1, big);
    }
}

// linear search
int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

// Binary Search
int binarySearch(int arr[], int i, int n, int x) {
    while (i <= n) {
        int m = i + (n - i) / 2;
        if (arr[m] == x) {
            return m;
        }
        if (arr[m] < x) {
            i = m + 1;
        } else {
            n = m - 1;
        }
    }
    return -1;
}

// mengukur waktu eksekusi dari suatu fungsi
template<typename Function>

double calculateTime(Function&& function) {
    auto start = high_resolution_clock::now();
    function();
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start);
    return duration.count();
}

//menghitung perkiraan ruang oleh setiap algoritma dalam satuan byte
int constanttime(int var) {
    return (var * 4) + 4;
}

int lineartime(int var, int n) {
    return (var * 4) + (var * 4) * n;
}

int main() {
    int arr[] = { 19, 12, 7, 10, 6, 9, 1, 5, 8, 89,
                    11, 2, 75, 3, 72, 99, 98, 12, 14, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 4;

    double bubbleTime = calculateTime([&]() {
        bubbleSort(arr, n);
    });

    cout << "Bubble Sort Time       : " << bubbleTime << " microseconds" << endl;
    cout << "Bubble Sort O(1) Space : " << constanttime(3) << " Byte" << endl;

    double insertionTime = calculateTime([&]() {
        insertionSort(arr, n);
    });

    cout << endl;
    cout << "Insertion Sort Time    : " << insertionTime << " microseconds" << endl;
    cout << "Insertion O(1) Space   : " << constanttime(4) << " Byte" << endl;

    double quickTime = calculateTime([&]() {
        quickSort(arr, 0, n - 1);
    });

    cout << endl;
    cout << "Quick Sort Time        : " << quickTime << " microseconds" << endl;
    cout << "Quick Sort O(n) Space  : " << lineartime(3, n) << " Byte" << endl;

    double linearTime = calculateTime([&]() {
        linearSearch(arr, n, x);
    });

    cout << endl;
    cout << "Linear Search Time        : " << linearTime << " microseconds" << endl;
    cout << "Linear Search O(n) Space  : " << constanttime(3) << " Byte" << endl;

    double binaryTime = calculateTime([&]() {
        binarySearch(arr, 0, n - 1, x);
    });

    cout << endl;
    cout << "Binary Search Time         : " << binaryTime << " microseconds" << endl;
    cout << "Binary Search O(n) Space   : " << constanttime(4) << " Byte" << endl;

    return 0;
}
